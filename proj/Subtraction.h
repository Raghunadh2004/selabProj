#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Operation.h"

#ifndef SUBTRACTION_H
#define SUBTRACTION_H

class Subtraction: public Operation
{
    public:
    Subtraction();
    Number calculateRes(Number n1,Number n2);
};

#endif