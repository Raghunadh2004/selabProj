#include "Division.h"
#include <string>
#include <bits/stdc++.h>
// Constructor


// Function to perform division
Number Division::calculateRes(Number divident, Number divisor) {
    vector<int> number1 = divident.getNumber();
    vector<int> number2 = divisor.getNumber();
    string num1 = vectorToString(number1);
    string num2 = vectorToString(number2);
    // cout << num1 << " " << num2 << endl;
    int divisor1 = stoi(num2);
    // cout << divisor1 << end
    num1.push_back('0');
    string numb = longDivision(num1, divisor1);
    // cout << numb << endl;
    // numb=n;
    Number a(numb,10);
    return a;
}

// Helper function for long division
string Division::longDivision(string& number, int divisor) {

     try {
    //   cout << "Inside try \n";
      if ((divisor == 0) || (divisor > pow(10,9)))
      {
         throw divisor;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x ) {
      cout << "Exception Caught \n";
      return "";
   }

    string ans;
    string s1="0";
    
    // Find prefix of number that is larger
    // than divisor.
    int idx = 0;
    int temp = number[idx] - '0';
    while (idx<(number.size()-1)&&temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
 
    // Repeatedly divide divisor with temp. After
    // every division, update temp to include one
    // more digit.
    while ((number.size()-1 )> idx) {
        // Store result in answer i.e. temp / divisor
        ans += (temp / divisor) + '0';
 
        // Take next digit of number
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    
    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";
 
    // else return ans
    return ans;
}

// Helper function to convert vector<int> to string
string Division::vectorToString(const vector<int>& num) {
    string s;
    for (auto i : num) {
        s.push_back(static_cast<char>(i + 48));
    }
    return s;
}
