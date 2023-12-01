#ifndef DIVISION_H
#define DIVISION_H
#include <bits/stdc++.h>
#include "Operation.h"
#include "Number.h"

class Division : public Operation{
public:
    // Constructor
    // Function to perform division
    Number calculateRes(Number n1 , Number n2);

private:
    // Helper function for long division
    string longDivision( std::string& number, int divisor);

    // Helper function to convert vector<int> to string
    string vectorToString(const std::vector<int>& num);

};

#endif // DIVISION_H
