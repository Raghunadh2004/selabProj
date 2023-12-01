#include <bits/stdc++.h>
using namespace std;
#include "IntegerSubtraction.h"
using namespace std;


pair<vector<int>,bool> IntegerSubtraction::findDiff(vector<int>  str1, vector<int>  str2,int power1,int power2) 
{ 
	// Before proceeding further, make sure str1 
	// is not smaller 
    int k=0;
	Compare c;
	if (c.compare(str1, str2,power1,power2)==0) {
		swap(str1, str2);
        k=1; 
    }

	// Take an empty string for storing result 
	vector<int>str;bool s;
    if (k == 1)
    {
        s = false;
    }
    else{
        s = true;
    }
	// Calculate length of both string 
	int n1 = str1.size(), n2 = str2.size(); 

	// Reverse both of strings 
	reverse(str1.begin(), str1.end()); 
	reverse(str2.begin(), str2.end()); 

	int carry = 0; 

	// Run loop till small string length 
	// and subtract digit of str1 to str2 
	for (int i = 0; i < n2; i++) { 
		// Do school mathematics, compute difference of 
		// current digits 

		int sub 
			= ((str1[i] ) - (str2[i]) - carry); 

		// If subtraction is less than zero 
		// we add then we add 10 into sub and 
		// take carry as 1 for calculating next step 
		if (sub < 0) { 
			sub = sub + 10; 
			carry = 1; 
		} 
		else
			carry = 0; 

		str.push_back(sub); 
	} 

	// subtract remaining digits of larger number 
	for (int i = n2; i < n1; i++) { 
		int sub = ((str1[i]) - carry); 

		// if the sub value is -ve, then make it positive 
		if (sub < 0) { 
			sub = sub + 10; 
			carry = 1; 
		} 
		else
			carry = 0; 

		str.push_back(sub); 
	} 

	// reverse resultant string 
	reverse(str.begin(), str.end());
    pair<vector<int>,bool> p;
    p.first = str;
    p.second = s;
	return p; 
} 

Number IntegerSubtraction::calculateRes(Number n1, Number n2)
{
    string ans;
    vector<int> v1 = n1.getNumber();
    vector<int> v2 = n2.getNumber();
    int base = 10,power = 0;
    pair<vector<int>,bool> v;
    v=findDiff(v1,v2,n1.getPower(),n2.getPower()); 
    std::ostringstream oss;

  if (!v.first.empty())
  {
    // Convert all but the last element to avoid a trailing ","
    std::copy(v.first.begin(), v.first.end()-1,
        std::ostream_iterator<int>(oss, ""));

    // Now add the last element with no delimiter
    oss << v.first.back();
  }
  Number r(oss.str(),0,10);
  r.setIsPos(v.second);
 return r;
 
}
IntegerSubtraction:: IntegerSubtraction(){

}