#include <bits/stdc++.h>
using namespace std;
#include "Addition.h"
using namespace std;


Number Addition :: add(Number n1,Number n2)
{
    string ans;
    vector<int> v1 = n1.getNumber();
    vector<int> v2 = n2.getNumber();
    int base = 10,power = 0;
    int a = max(v1.size(),v2.size())+1;
    int carry = 0;
    vector<int> res(a,0);
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    for (int j=0;j<res.size();j++)
    {
        int s = carry;
        if (j < v1.size())
        {
            s += v1[j];
        }
        if (j < v2.size())
        {
            s += v2[j];
        }
        carry = s/10;
        res[j] = s%10;
    }
    if (res[res.size()-1] == 0)
    {
        res.pop_back();
    }
    reverse(res.begin(),res.end());
    for (auto x : res)
    {
        ans += x+'0';
    }
    return Number(ans,power,base);
}

Number Addition::calculateRes(Number n1, Number n2)
{
    vector<int> v;
    string x = "0";
    Number res(x,0,10);
    return res;
}
