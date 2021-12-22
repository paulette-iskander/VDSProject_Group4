// A minimalistic BDD library, following Wolfgang Kunz lecture slides
//
// Created by Markus Wedler 2014

#ifndef VDSPROJECT_MANAGER_H
#define VDSPROJECT_MANAGER_H

#include "ManagerInterface.h"
#include <vector>

namespace ClassProject {

    class Manager : public ManagerInterface {
    public:

        struct BDDnode {
            BDD_ID node_id;
            std::string label;
            BDD_ID high;
            BDD_ID low;
            BDD_ID top;
        };

        std::vector<BDDnode> unique_table;

        size_t uniqueTableSize();
        BDD_ID createVar(const std::string &label);
        //const BDD_ID &True();
        const BDD_ID &False();

    public:  Manager(){

            BDDnode F = {0,"False",0,0,0};
            BDDnode T = {1,"True",1,1,1};

            unique_table.push_back(F);
            unique_table.push_back(T);

        }
    };
}
#endif
