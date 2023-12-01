#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Addition.h"

#ifndef INTEGERADDITION_H
#define INTEGERADDITION_H

class IntegerAddition: public Addition
{
    public:
    IntegerAddition();
    Number calculateRes(Number n1,Number n2);
};


#endif