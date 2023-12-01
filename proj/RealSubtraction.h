#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Subtraction.h"

#ifndef REALSUBTRACTION_H
#define REALSUBTRACTION_H

class RealSubtraction : public Subtraction
{
    public:
    Number calculateRes(Number n1,Number n2);
};


#endif