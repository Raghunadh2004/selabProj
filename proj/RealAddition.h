#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Addition.h"
#include "IntegerAddition.h"

#ifndef REALADDITION_H
#define REALADDITION_H

class RealAddition : public Addition
{
    public:
    Number calculateRes(Number n1,Number n2);
};


#endif