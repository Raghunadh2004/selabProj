#include <bits/stdc++.h>
using namespace std;

#ifndef NUMBER_H
#define NUMBER_H

class Number
{
    public:
    Number(string number,int power,int base);
    Number(string number,int base);
    bool getIsPos();
    bool getIsReal();
    void setc(int c);
    bool getBase();
    void setIsPos(bool );
    void printNumber();
    vector<int> getNumber();
    int getPower();
    void setPower(int);
    private:
    vector<int> numb;
    bool isPos;
    int c=0;
    int power;
    string number;
    bool isReal;
    int base;
};


#endif