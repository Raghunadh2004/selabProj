#include <bits/stdc++.h>
using namespace std;
#include "Compare.h"
using namespace std;



int Compare::compare(vector<int> str1, vector<int> str2,int power1,int power2) 
{ 
    if(str1.size()-power1 > str2.size()-power2){
        return 1;
    }

    if(str1.size()<str2.size()){
        for(int i=str1.size();i<str2.size();i++){
            str1.push_back(0);
        }
    }
    else{
            for(int i=str2.size();i<str1.size();i++){
            str2.push_back(0);
        }

    }

    for(int i=0;i<str2.size();i++)
    {
        if(str1[i]>str2[i]){
            return 1;
        }
        else if(str1[i]<str2[i]){
            return 0;
        }
    }

    return 2;


} 


Number Compare::calculateRes(Number n1, Number n2)
{
    vector<int> v1 = n1.getNumber();
    vector<int> v2 = n2.getNumber();
    int base = 10,power = 0;
    int power1=n1.getPower();
    int power2=n2.getPower();
    string ans;
    ans.push_back((char)(compare(v1,v2,power1,power2)+48));
    Number fans(ans,10);
    return fans;
}