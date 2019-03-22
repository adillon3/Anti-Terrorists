#ifndef CUSTOMER_NODE_H
#define CUSTOMER_NODE_H

#include <iostream>
#include <string>
#include <fstream>

class cNode {
public:
    cNode() : company(""), address(""), cityStateZip(""), interest(""), importance(""), nxt(nullptr), prv(nullptr), urbanBought(0), desertBought(0), jungleBought(0), pamphletsOrdered(0) {}
    std::string company;
    std::string address;
    std::string cityStateZip;
    std::string interest;
    std::string importance;
    cNode *nxt;
    cNode *prv;
    int urbanBought;
    int desertBought;
    int jungleBought;
    int pamphletsOrdered;
};

#endif // CUSTOMER_NODE_H
