#include <bits/stdc++.h>
using namespace std;
#include "Number.h"

#ifndef OPERATION_H
#define OPERATION_H

class Operation
{
    public:
    virtual  Number calculateRes(Number n1,Number n2)=0;
};


#endif