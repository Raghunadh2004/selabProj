#include <bits/stdc++.h>
using namespace std;
#include "Compute.h"
using namespace std;

void Compute :: adjustOperation(Number n1,Number n2,string op){
    // cout << op << endl;
    if (op == "+")
    {
        if ((n1.getIsReal() == false) && (n2.getIsReal() == false))
        {
            IntegerAddition a;
            Addition* b = &a;
            Operation* op = b;
            Calculate c;
            if ((n1.getIsPos() == true) && (n2.getIsPos() == true))
            {
                c.setOperation(op);
                Number res = c.calculateRes(n1,n2);
                res.printNumber();
            }
            else if ((n1.getIsPos() == false) && (n2.getIsPos() == false))
            {
                c.setOperation(op);
                n1.setIsPos(true);
                n2.setIsPos(true);
                Number res = c.calculateRes(n1,n2);
                bool s = false;
                res.setIsPos(s);
                res.printNumber();
            }
            else if((n1.getIsPos() == true) && (n2.getIsPos() == false))
            {
                IntegerSubtraction a;
                Subtraction* b = &a;
                Operation* op = b;
                Calculate c;
                c.setOperation(op);
                n2.setIsPos(true);
                Number res = c.calculateRes(n1,n2);
                res.printNumber();
            }
            else if((n1.getIsPos() == false) && (n2.getIsPos() == true))
            {
                IntegerSubtraction a;
                Subtraction* b = &a;
                Operation* op = b;
                Calculate c;
                c.setOperation(op);
                n2.setIsPos(true);
                n2.setIsPos(true);
                Number res = c.calculateRes(n2,n1);
                res.printNumber();
            }
        }
        else
        {
            RealAddition a;
            Addition* b = &a;
            Operation* op = b;
            Calculate c;
            if ((n1.getIsPos() == true) && (n2.getIsPos() == true))
            {
                c.setOperation(op);
                Number res = c.calculateRes(n1,n2);
                res.printNumber();
            }
            else if ((n1.getIsPos() == false) && (n2.getIsPos() == false))
            {
                n1.setIsPos(true);
                n2.setIsPos(true);
                c.setOperation(op);
                Number res = c.calculateRes(n1,n2);
                bool s = false;
                res.setIsPos(s);
                res.printNumber();
            }
            else if((n1.getIsPos() == true) && (n2.getIsPos() == false))        
            {
                RealSubtraction a;
                Subtraction* b = &a;
                Operation* op = b;
                Calculate c;
                c.setOperation(op);
                n2.setIsPos(true);
                Number res = c.calculateRes(n1,n2);
                res.printNumber();
            }
            else if((n1.getIsPos() == false) && (n2.getIsPos() == true))
            {
                RealSubtraction a;
                Subtraction* b = &a;
                Operation* op = b;
                Calculate c;
                c.setOperation(op);
                n2.setIsPos(true);
                Number res = c.calculateRes(n2,n1);
                res.printNumber();
            }
        }
    }
    else if(op == "-")
    {
        IntegerSubtraction a;
        Subtraction* b = &a;
        Operation* op = b;
        if ((n1.getIsReal() == false) && (n2.getIsReal() == false)){
         if ((n1.getIsPos() == true) && (n2.getIsPos() == true))
        {
            Calculate c;
            c.setOperation(op);
            Number res = c.calculateRes(n1,n2);
            res.printNumber();
    }
    if ((n1.getIsPos() == false) && (n2.getIsPos() == true))
            {
            IntegerAddition a;
                    Addition* b = &a;
                    Operation* op = b;
                    Calculate c;
                    c.setOperation(op);
                    Number res = c.calculateRes(n1,n2);
                    res.setIsPos(false);
                    res.printNumber();
        }
        if ((n1.getIsPos() == true) && (n2.getIsPos() == false))
            {
            IntegerAddition a;
                    Addition* b = &a;
                    Operation* op = b;
                    Calculate c;
                    c.setOperation(op);
                    Number res = c.calculateRes(n1,n2);
                    res.printNumber();
        }
        if ((n1.getIsPos() == false) && (n2.getIsPos() == false))
            {
                Calculate c;
                c.setOperation(op);
                Number res = c.calculateRes(n2,n1);
                res.printNumber();
            }
        }
        else
        {
            if ((n1.getIsPos() == true) && (n2.getIsPos() == true))
            {
                RealSubtraction a;
                Subtraction* b = &a;
                Operation* op = b;
                Calculate c;
                c.setOperation(op);
                Number res = c.calculateRes(n1,n2);
                res.printNumber();
            }
        if ((n1.getIsPos() == false) && (n2.getIsPos() == true))
        {
            RealAddition a;
            Addition* b = &a;
            Operation* op = b;
            Calculate c;
            c.setOperation(op);
            Number res = c.calculateRes(n1,n2);
            res.setIsPos(false);
            res.printNumber();
        }
        if ((n1.getIsPos() == true) && (n2.getIsPos() == false))
        {
            // cout << "Hi0";
                    RealAddition a;
                    Addition* b = &a;
                    Operation* op = b;
                    Calculate c;
                    c.setOperation(op);
                    n2.setIsPos(true);
                    Number res = c.calculateRes(n1,n2);
                    res.printNumber();
        }
        if ((n1.getIsPos() == false) && (n2.getIsPos() == false))
        {
                RealSubtraction a;
                Subtraction* b = &a;
                Operation* op = b;
                Calculate c;
                c.setOperation(op);
                Number res = c.calculateRes(n2,n1);
                res.printNumber();
        }
    }
    }
    else if(op == "*")
    {
        Multiplication m;
        Operation* op = &m;
        Calculate c;
        c.setOperation(op);
        Number res = c.calculateRes(n1,n2);
        if ((n1.getIsPos() == false) || (n2.getIsPos() == false))
        {
            res.setIsPos(false);
        }
        if ((n1.getIsPos() == false) && (n2.getIsPos() == false))
        {
            res.setIsPos(true);
        }
        res.printNumber();
    }
    else if(op == "/")
    {
        Division d;
        Operation* op = &d;
        Calculate c;
        c.setOperation(op);
        Number res = c.calculateRes(n1,n2);
        res.printNumber();
    }
    if(op == "c"){
    
    Compare b;
            Operation* op = &b;
            Calculate c;
            c.setOperation(op);
            Number res = c.calculateRes(n1,n2);
            res.setc(1);
            res.printNumber();
    }
}