#include <bits/stdc++.h>
#include "Number.h"
#include "Compute.h"

using namespace std;

int main()
{
    vector<vector<string>> test;

    // string x1,x2,x3;
    Compute cp;
    while(1){
        string s1,s2,s3;
        cin>>s1;
        if(s1=="END") break;
        // Number n1(s1,10);
        cin>>s2>>s3;
        test.push_back({s1,s2,s3});
        // Number n2(s2,10);
        // cp.adjustOperation(n1,n2,s3);
    }

    for(auto it: test){
        Number n1(it[0],10);
        Number n2(it[1],10);
        cp.adjustOperation(n1,n2,it[2]);
    }
    return 0;
    // int p1,p2;
    // // cin >> p1;
    // cin >> x2;
    // // n1.printNumber();
    // // cout << n1.getPower() << endl;
    // // n1.printNumber();
    // cin >> x3;
    // cp.adjustOperation(n1,n2,x3);
    // return 0;
}