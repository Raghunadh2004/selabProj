#include <bits/stdc++.h>
using namespace std;
#include "Calculate.h"
using namespace std;

void Calculate:: setOperation(Operation* op)
{
    this->operation = op;
}

Number Calculate:: calculateRes(Number n1,Number n2)
{
    Number res = operation->calculateRes(n1,n2);
    return res;
}