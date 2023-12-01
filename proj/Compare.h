#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Operation.h"

#ifndef COMPARE_H
#define COMPARE_H

class Compare: public Operation
{
    public:
    int compare(vector<int> str1, vector<int> str2,int , int);
    Number calculateRes(Number n1,Number n2);
};

#endif