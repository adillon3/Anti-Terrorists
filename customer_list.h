#ifndef CUSTOMER_LIST_H
#define CUSTOMER_LIST_H

#include "customer_node.h"
#include <QTextStream>
#include <QDebug>
#include "secdialog.h"

//makes up nodes of the linked list.
class customerList {
public:
    customerList() :rc(0), first(nullptr), last(nullptr) {}
    ~customerList();
    void poplist();
    void saveexit();
    void printall();
    void addtolist(std::string company, std::string address, std::string cityStateZip, std::string interest, std::string importance);
    bool deletebyname(std::string);
    void sortall();
    void printsortedKey();
    void printsortedWithPurchases();
    void buyjunglebot(std::string, int);
    void buyurbanbot(std::string, int);
    void buydesertbot(std::string, int);
    void orderPamplhet(std::string, int);
    cNode *first;

private:
    //cNode customerNode;
    int rc;
    //cNode *first;   //trying to make public. make sure it doesnt break anything else...
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
    std::string company, address, cityStateZip, interest, importance, pamph, urob, drob, jrob, space;


    while (getline(fin, company) && getline(fin, address) &&
        getline(fin, cityStateZip) && getline(fin, interest) &&
        getline(fin, importance) && getline(fin, pamph) &&
           getline(fin, urob) && getline (fin, drob) &&
           getline(fin, jrob) && getline(fin, space)) {

        tmp = new cNode;
        tmp->nxt = nullptr;
        tmp->company = company;
        tmp->address = address;
        tmp->cityStateZip = cityStateZip;
        tmp->interest = interest;
        tmp->importance = importance;
        tmp->pamphletsOrdered = std::stoi(pamph);
        tmp->urbanBought = std::stoi(urob);
        tmp->desertBought = std::stoi(drob);
        tmp->jungleBought = std::stoi(jrob);
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
        fout << first->importance << "\n";

        fout<< first->pamphletsOrdered << "\n";
        fout<<first->urbanBought << "\n";
        fout<<first->desertBought<<"\n";
        fout<<first->jungleBought<<"\n\n";

        tmp = first;
        first = first->nxt;
        delete tmp;
    }
    first = nullptr;
    last = nullptr;
    rc = 0;
}

void customerList::printall() {
    cNode *tmp;
    tmp = first;

    while (tmp != nullptr) {

        /*
        std::cout << tmp->company << "\n"
            << tmp->address << "\n"
            << tmp->cityStateZip << "\n"
            << tmp->interest << "\n"
            << tmp->importance << "\n"
            << tmp->pamphletsOrdered << "\n\n";
         */

        tmp = tmp->nxt;
    }
}

void customerList::addtolist(std::string company, std::string address, std::string cityStateZip, std::string interest, std::string importance) {
    cNode *newlast, *lastlast;
    //std::string company;
    //std::string address;
    //std::string cityStateZip;
    //std::string interest;
    //std::string importance;

    newlast = new cNode;

    //not firt entry
    if (this->first != nullptr) {
        lastlast = this->last;
        lastlast->nxt = newlast;
        newlast->prv = lastlast;
    }
    else {
        newlast->prv = nullptr;
        this->first = newlast;
    }
    newlast->nxt = nullptr;
    this->last = newlast;

    //std::cout << "Enter the following information...\n";
    //std::cin.clear();
    //std::cin.ignore(1000, '\n');

    //std::cout << "Company name: ";
    //getline(std::cin, newlast->company);
    newlast->company = company;

    //std::cout << "Address: ";
    //getline(std::cin, newlast->address);
    newlast->address = address;

    //std::cout << "City, State, and Zip: ";
    //getline(std::cin, newlast->cityStateZip);
    newlast->cityStateZip = cityStateZip;

    //std::cout << "Interest level: ";
    //getline(std::cin, newlast->interest);
    newlast->interest = interest;

    //std::cout << "Importance: ";
    //getline(std::cin, newlast->importance);
    newlast->importance = importance;
    newlast->pamphletsOrdered = 0;
    newlast->urbanBought = 0;
    newlast->jungleBought = 0;
    newlast->desertBought = 0;

    ++this->rc;
}

bool customerList::deletebyname(std::string name) {
    //std::string name;

    //std::cout << "Enter the name of the company you want to delete: ";
    //std::cin >> name;

    bool done = false;
    cNode *tmp, *before, *after;
    tmp = this->first;

    while (tmp != nullptr) {
        if (tmp->company == name) {

            if (tmp == this->first && this->rc > 1) {//deleting first entry
                after = tmp->nxt;
                delete tmp;
                tmp = nullptr;
                this->first = after;
                --this->rc;
                done = true;
            }

            else if (tmp == this->last && this->rc > 1) { //deleting last entry
                before = tmp->prv;
                delete tmp;
                tmp = nullptr;
                before->nxt = nullptr;
                this->last = before;
                --this->rc;
                done = true;
            }

            else if (this->rc == 1) {//deleting w/ only 1 entry in list
                delete tmp;
                tmp = nullptr;
                --this->rc;
                this->first = nullptr;
                this->last = nullptr;
                done = true;

            }

            else { //deleting middle entry
                before = tmp->prv;
                after = tmp->nxt;
                before->nxt = after;
                after->prv = before;
                --this->rc;
                delete tmp;
                tmp = nullptr;
                done = true;
            }

            if (done) {
                return true;
            }
        }
        tmp = tmp->nxt;
    }
    return false;
}

void customerList::sortall() {
    cNode *i, *j;
    //bool sorted = false;
    std::string tmpcompany;
    std::string tmpaddress;
    std::string tmpcityStateZip;
    std::string tmpinterest;
    std::string tmpimportance;
    int tmppam, tmpubot, tmpdbot, tmpjbot;

    if (this->rc == 1)
        std::cout << "No need to sort, there is only one entry.\n";
    if (this->rc == 0)
        std::cout << "List empty, nothing to sort.\n";

    for (i = this->first; i->nxt != nullptr; i = i->nxt) {
        for (j = i->nxt; j != nullptr; j = j->nxt) {
            if (i->company > j->company) {
                tmpcompany = i->company;
                tmpaddress = i->address;
                tmpcityStateZip = i->cityStateZip;
                tmpinterest = i->interest;
                tmpimportance = i->importance;
                tmppam = i->pamphletsOrdered;
                tmpubot = i->urbanBought;
                tmpdbot = i->desertBought;
                tmpjbot = i->jungleBought;

                i->company = j->company;
                i->address = j->address;
                i->cityStateZip = j->cityStateZip;
                i->interest = j->interest;
                i->importance = j->importance;
                i->pamphletsOrdered = j->pamphletsOrdered;
                i->urbanBought = j->urbanBought;
                i->desertBought = j->desertBought;
                i->jungleBought = j->jungleBought;

                j->company = tmpcompany;
                j->address = tmpaddress;
                j->cityStateZip = tmpcityStateZip;
                j->interest = tmpinterest;
                j->importance = tmpimportance;
                j->pamphletsOrdered = tmppam;
                j->urbanBought = tmpubot;
                j->desertBought = tmpdbot;
                j->jungleBought = tmpjbot;

            }
        }
        //sorted = true;
    }
}

void customerList::printsortedKey() {
    this->sortall();

    //printing
    cNode *tmp;
    tmp = first;

    while (tmp != nullptr) {
        if (tmp->importance == "key") {

            std::cout << tmp->company << "\n"
                << tmp->address << "\n"
                << tmp->cityStateZip << "\n"
                << tmp->interest << "\n"
                << tmp->importance << "\n"
                << tmp->pamphletsOrdered << "\n\n";
        }
        tmp = tmp->nxt;
    }
}

void customerList::printsortedWithPurchases() {
    this->sortall();
    cNode *tmp = first;

    while (tmp != nullptr) {
        if (tmp->importance == "key") {
            std::cout << tmp->company << "\n"
                << tmp->address << "\n"
                << tmp->cityStateZip << "\n"
                << tmp->interest << "\n"
                << tmp->importance << "\n"
                << tmp->pamphletsOrdered << "\n"
                << tmp->urbanBought << "\n"
                << tmp->jungleBought << "\n"
                << tmp->desertBought << "\n\n";

        }
        tmp = tmp->nxt;
    }
}

void customerList::buyjunglebot(std::string name, int amt) {
    cNode *tmp = first;
    bool found = false;

    while (tmp != nullptr) {
        if (tmp->company == name) {
            tmp->jungleBought = tmp->jungleBought + amt;;
            found = true;
        }
        tmp = tmp->nxt;
    }
    if (found) std::cout << "list updated\n";
    if (!found) std::cout << "company not found in list...please try again\n";
}

void customerList::buyurbanbot(std::string name, int amt) {
    cNode *tmp = first;
    bool found=false;

    while (tmp != nullptr) {
        if (tmp->company == name) {
            tmp->urbanBought = tmp->urbanBought + amt;
            found = true;
        }
        tmp = tmp->nxt;
    }
    if (found) std::cout << "list updated\n";
    if (!found) std::cout << "company not found in list...please try again\n";
}

void customerList::buydesertbot(std::string name, int amt) {
    cNode *tmp = first;
    bool found=false;

    while (tmp != nullptr) {
        if (tmp->company == name) {
            tmp->urbanBought = tmp->urbanBought + amt;
            found = true;
        }
        tmp = tmp->nxt;
    }
    if (found) std::cout << "list updated\n";
    if (!found) std::cout << "company not found in list...please try again\n";
}

void customerList::orderPamplhet(std::string name, int amt){
    cNode *tmp = first;

    while (tmp != nullptr) {
        if (tmp->company == name) {
            tmp->pamphletsOrdered = tmp->pamphletsOrdered + amt;
        }
        tmp = tmp->nxt;
    }
}


#endif // CUSTOMER_LIST_H
