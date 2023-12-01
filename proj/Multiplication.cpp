#include "Multiplication.h"
#include <bits/stdc++.h>
using namespace std;



// Function to convert vector<int> to string
string Multiplication::vectorToString(const vector<int>& num) {
    string s;
    for (auto i : num) {
        s.push_back(static_cast<char>(i + 48));
    }
    return s;
}

// Function to perform multiplication of two strings
string Multiplication::multiply(const string& num1, const string& num2) {
    // Implementation of multiplication logic
    // ...

    vector<int> vec1(num1.size());
    for (int i = 0; i < num1.size(); i++) {
        vec1[i] = num1[num1.size() - i - 1] - '0';
    }
    vector<int> vec2(num2.size());
    for (int i = 0; i < num2.size(); i++) {
        vec2[i] = num2[num2.size() - i - 1] - '0';
    }

    vector<int> result(vec1.size() + vec2.size(), 0);

    for (int i = 0; i < vec2.size(); i++) {
        int carry = 0;
        for (int j = 0; j < vec1.size(); j++) {
            int product = vec1[j] * vec2[i] + carry + result[i + j];
            carry = product / 10;
            result[i + j] = product % 10;
        }
        result[i + vec1.size()] = carry;
    }

    while (result.size() > 1 && result.back() == 0) {
        result.pop_back();
    }

    string str(result.size(), '0');
    for (int i = 0; i < result.size(); i++) {
        str[result.size() - i - 1] = result[i] + '0';
    }

    return str;
}

// Function to perform multiplication
Number Multiplication::calculateRes(Number n1 , Number n2) {
    vector<int> num1 = n1.getNumber();
    vector<int> num2 = n2.getNumber();
    string number1 = vectorToString(num1);
    string number2 = vectorToString(num2);
    string numb= multiply(number1, number2);
    Number fans(numb,0,10);
    fans.setPower(n1.getPower()+n2.getPower());
    // cout << numb << endl;
    return fans;
}

Multiplication:: Multiplication()
{

}
