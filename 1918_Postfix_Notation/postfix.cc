#include <cstdio>
#include <cstdlib>
#include <stack>
#include <string>
#include <iostream>
#include "postfix.h"
using namespace std;

Postfix::Postfix(string _str)
{
    this->infixStr = _str;
    this->seperateCh = ' ';
}

bool Postfix::isOperator(char _ch)
{
    if(_ch == '+' || _ch == '-'
            || _ch == '*' || _ch == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Postfix::isLeftBracket(char _ch)
{
    if(_ch == '(')
    {
        return true;
    }   
    else
        return false;
}

bool Postfix::isRightBracket(char _ch)
{
    if(_ch == ')')
    {
        return true;
    }   
    else
        return false;
}

int Postfix::getPriorityOfOperator(char _ch)
{
    switch(_ch)
    {
        case '(': case ')':
            return 0;
        case '+': case '-':
            return 1;
        case '*': case '/':
            return 2;
        default:
            printf("\nIt's not Operator\n");
            return -1;
    }
}

bool Postfix::isNumber(char _ch)
{
    if(_ch >= 'A' && _ch <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Postfix::fromInfixToPostfix(string &_destStr)
{
    string::iterator iter = infixStr.begin();

    // Iterates the infix Expression when the pointer is not NULL
    while(*iter)
    {
        // Pointer is operator
        if(isOperator(*iter) == true)
        {
            _destStr.push_back(seperateCh);

            while(!operatorStack.empty() && 
                    getPriorityOfOperator(*iter) <= getPriorityOfOperator(operatorStack.top()))
            {
                cout << operatorStack.top();

                _destStr.push_back(operatorStack.top());
                _destStr.push_back(seperateCh);

                operatorStack.pop();
            }
            operatorStack.push(*iter);
        }

        // Pointer is Left bracket
        else if(isLeftBracket(*iter))
        {
            operatorStack.push(*iter);
        }

        // Pointer is Bracket
        else if(isRightBracket(*iter))
        {
            char topOperator = operatorStack.top();
            while(topOperator != '(')
            {
                cout << topOperator;
                operatorStack.pop();

                _destStr.push_back(seperateCh);
                _destStr.push_back(topOperator);

                topOperator = operatorStack.top();
            }

            operatorStack.pop();
        }
        // Pointer is operand, namely number
        else
        {
            cout << *iter;
            _destStr.push_back(*iter);
        }

        // Next character
        iter++;
    }

    while(!operatorStack.empty())
    {
        cout << operatorStack.top();
        _destStr.push_back(seperateCh);
        _destStr.push_back(operatorStack.top());

        operatorStack.pop();
    }
    cout << endl;
}
