#include <bits/stdc++.h>
using namespace std;
#include "Number.h"
using namespace std;
Number:: Number(string number,int base)
{
    int k=0;
    if (number[0] == '-')
    {
        isPos = false;
        k = 1;
    }
    else{
        isPos = true;
    }
    power = -1;
    for (int j=k;j<number.size();j++)
    {
        if(number[j]=='.'){
            power = number.size()-j-k-1;
            continue;
        }
        numb.push_back(number[j]-'0');
    }
    if (isPos == false)
    {
        power += 1;
    }
    if (power == -1)
    {
        power += 1;
    }
    this->power = power;
    this->base = base;
    this->isReal = false;
    if(this->power){
        isReal=true;
    }
}

Number:: Number(string number,int power,int base)
{
   int k=0;
    if (number[0] == '-')
    {
        isPos = false;
        k = 1;
    }
    else{
        isPos = true;
    }

    for (int j=k;j<number.size();j++)
    {
        if(number[j]=='.'){
            power = number.size()-j-k-1;
            continue;
        }
        numb.push_back(number[j]-'0');
    }
    if (isPos == false)
    {
        power += 1;
    }
    this->power = power;
    this->base = base;
    this->isReal=false;
    if(this->power){
        isReal=true;
    }
}

void Number:: printNumber()
{
    // for (auto x : numb)
    // {
    //     cout << x;
    // }
    // cout << endl;
    // cout << power << endl;
    if (isPos == false)
    {
        cout << '-';
    }
    if(c == 1){
        cout<<numb[0]<<endl;
    }
    else{
        if (power == 0)
        {
            for (auto x : numb)
            {
                cout << x;
            }
            cout << endl;
            return ;
        }
        if (power > numb.size())
        {
            // cout << "numb size " << numb.size() << endl;
            int a = power-numb.size();
            for (int j=0;j<a;j++)
            {
                numb.insert(numb.begin(),0);
                // cout << j << " ";
            }
        }  
        for (int j=0;j<numb.size()-power;j++)
        {
            cout << numb[j];
        }
        cout << '.';
        for (int j=numb.size()-power;j<numb.size();j++)
        {
            cout << numb[j];
        }
        cout << endl;
    }
}

int Number:: getPower()
{
    return power;
}
void Number:: setc(int c)
{
    this->c = c;
}
void Number:: setIsPos(bool isPos)
{
    this->isPos = isPos;
}
void Number:: setPower(int power)
{
     this->power = power;
}

vector<int> Number:: getNumber()
{
    return numb;
}

bool Number:: getIsPos()
{
    return isPos;
}

bool Number:: getIsReal()
{
    return isReal;
}

bool Number:: getBase()
{
    return base;
}