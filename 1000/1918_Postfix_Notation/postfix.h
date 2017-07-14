#ifndef _POSTFIX_H_
#define _POSTFIX_H_

#include <cstdio>
#include <cstdlib>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

class Postfix
{
public:
    stack<char> operatorStack;
    Postfix(string _str);
    bool isOperator(char _ch);
    bool isLeftBracket(char _ch);
    bool isRightBracket(char _ch);
    int getPriorityOfOperator(char _ch);
    bool isNumber(char _ch);
    void fromInfixToPostfix(string &_destStr);

private:
    string infixStr;
    string postfixStr;
    char seperateCh;
};

#endif
