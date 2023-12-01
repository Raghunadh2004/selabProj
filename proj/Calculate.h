#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Operation.h"
#ifndef CALCULATE_H
#define CALCULATE_H

class Calculate
{
    public:
    void setOperation(Operation* op);
    Number calculateRes(Number n1,Number n2);
    private:
    Operation* operation;
};


#endif