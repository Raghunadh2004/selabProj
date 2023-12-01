#include <bits/stdc++.h>
using namespace std;
#include "RealSubtraction.h"
#include "IntegerSubtraction.h"
using namespace std;


Number RealSubtraction::calculateRes(Number n1, Number n2)
{
    vector<int> v1 = n1.getNumber();
    vector<int> v2 = n2.getNumber();
    if (n1.getPower() > n2.getPower())
    {
        int a = n1.getPower()-n2.getPower();
        for (int j=0;j<a;j++)
        {
            v2.push_back(0);
        }
    }
    else
    {
        int a = n2.getPower()-n1.getPower();
        for (int j=0;j<a;j++)
        {
            v1.push_back(0);
        }
    }
    int pow = max(n1.getPower(),n2.getPower());
    int base = 10;
    IntegerSubtraction ia;
    string x1 = "";
    for (auto x : v1)
    {
        x1 += x+'0';
    }
    string x2 = "";
    for (auto x : v2)
    {
        x2 += x+'0';
    }
    Number u1(x1,pow,base);
    Number u2(x2,pow,base);
    Number r = ia.calculateRes(u1,u2);
    r.setPower(pow);
    //cout << pow;
    return r;


}