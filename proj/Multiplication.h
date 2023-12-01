#include "Number.h"
#include "Operation.h"

#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H



class Multiplication : public Operation{
public:
    std::string vectorToString(const std::vector<int>& num);
    std::string multiply(const std::string& num1, const std::string& num2);
    Number calculateRes(Number n1 , Number n2);
    Multiplication();
};

#endif // MULTIPLICATION_H
