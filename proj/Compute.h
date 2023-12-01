#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Operation.h"
#include "Addition.h"
#include "Calculate.h"
#include "IntegerAddition.h"
#include "RealAddition.h"
#include "Subtraction.h"
#include "IntegerSubtraction.h"
#include "RealSubtraction.h"
#include "Multiplication.h"
#include "Division.h"

#ifndef COMPUTE_H
#define COMPUTE_H

class Compute
{
    public:
    void adjustOperation(Number n1,Number n2,string op);
};


#endif