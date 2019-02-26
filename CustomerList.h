#pragma once
#include "CustomerNode.h"

//makes up nodes of the linked list.
class customerList {
public:
	customerList() :rc(0), first(nullptr), last(nullptr) {};
	~customerList();
	void poplist();
	void saveexit();
	void printlist();
private:
	cNode customerNode;
	int rc;
	cNode *first;
	cNode *last;
};

customerList::~customerList() { //do destructor later
	std::cout << "destructor called\n";
}

void customerList::poplist() {
	std::ifstream fin("C:\\Users\\Cam\\Desktop\\customer_file.txt"); //change file location later
	if (!fin) {
		//maybe change so it doesnt exit program completely later
		std::cout << "Error opening file. Please try again\n";
		std::exit(0);
	}

	cNode *tmp = nullptr;
	cNode *loop = nullptr;
	std::string company, address, cityStateZip, interest, importance, space;


	while (getline(fin, company) && getline(fin, address) && 
		getline(fin, cityStateZip) && getline(fin, interest) &&
		getline(fin, importance) && getline(fin, space)) {

		tmp = new cNode;
		tmp->nxt = nullptr;
		tmp->company = company;
		tmp->address = address;
		tmp->cityStateZip = cityStateZip;
		tmp->interest = interest;
		tmp->importance = importance;
		++rc;

		//not first node
		if (first != nullptr) {
			loop->nxt = tmp;
			tmp->prv = loop;
		}
		else { //first node
			first = tmp;
			tmp->prv = nullptr;
		}
		last = tmp;
		loop = tmp;
	}
	fin.close();
}

void customerList::saveexit() {
	std::ofstream fout("C:\\Users\\Cam\\Desktop\\customer_file.txt");
	if (!fout) { //maybe change to loop later
		std::cout << "Problem opening file. Exiting program w/o saving\n";
		std::exit(0);
	}
	
	cNode *tmp;
	while (first != nullptr) {
		//std::cout << "entered while loop of saveexit\n";
		if (first->company.empty())
			first->company = "NA";
		fout << first->company << "\n";
		
		if (first->address.empty())
			first->address = "NA";
		fout << first->address << "\n";

		if (first->cityStateZip.empty())
			first->cityStateZip = "NA";
		fout << first->cityStateZip << "\n";

		if (first->interest.empty())
			first->interest = "NA";
		fout << first->interest << "\n";

		if (first->importance.empty())
			first->importance = "NA";
		fout << first->importance << "\n\n";

		tmp = first;
		first = first->nxt;
		delete tmp;
	}
	first = nullptr;
	last = nullptr;
	rc = 0;
}

void customerList::printlist() {
	cNode *tmp;
	tmp = first;
	
	while (tmp != nullptr) {
		std::cout << tmp->company << "\n"
		<< tmp->address<< "\n"
		<< tmp->cityStateZip << "\n"
		<< tmp->interest << "\n"
		<< tmp->importance << "\n\n";
		
		tmp = tmp->nxt;
	}
}