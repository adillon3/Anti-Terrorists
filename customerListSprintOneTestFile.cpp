
#include "pch.h"
#include "CustomerList.h"

int main()
{
	customerList mylist;
	mylist.poplist();
	std::cout << "test prompt. delete something from file and then enter something to console.\n";
	std::string x;
	std::cin >> x;
	mylist.printlist();
	mylist.saveexit();
	std::cout << "file should have restored the things deleted during program run\n";
	return 0;
}

