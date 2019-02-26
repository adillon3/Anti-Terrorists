#pragma once
#include <iostream>
#include <string>
#include <fstream>

struct cNode {
	std::string company;
	std::string address;
	std::string cityStateZip;
	std::string interest;
	std::string importance;
	cNode *nxt;
	cNode *prv;
};