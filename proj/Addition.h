#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Operation.h"

#ifndef ADDITION_H
#define ADDITION_H

class Addition: public Operation
{
    protected:
    Number add(Number n1,Number n2);
    public:
    virtual Number calculateRes(Number n1,Number n2);
};


#endif