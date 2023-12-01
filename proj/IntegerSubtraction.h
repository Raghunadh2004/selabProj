#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
#include "Subtraction.h"
#include "Compare.h"
#ifndef INTEGERSUBTRACTION_H
#define INTEGERSUBTRACTION_H

class IntegerSubtraction: public Subtraction
{
    public:
    IntegerSubtraction();
    Number calculateRes(Number n1,Number n2);
    private:
    
    pair<vector<int>,bool> findDiff(vector<int>  str1, vector<int>  str2,int,int);
};


#endif