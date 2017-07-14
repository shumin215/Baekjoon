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

    Postfix(string _str)
    {
        this->infixStr = _str;
        this->seperateCh = ' ';
    }

    bool isOperator(char _ch)
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
    bool isLeftBracket(char _ch)
    {
        if(_ch == '(')
        {
            return true;
        }   
        else
            return false;
    }

    bool isRightBracket(char _ch)
    {
        if(_ch == ')')
        {
            return true;
        }   
        else
            return false;
    }

    int getPriorityOfOperator(char _ch)
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

    bool isNumber(char _ch)
    {
        if(_ch >= '0' && _ch <= '9')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void showStr()
    {
        cout << infixStr << endl;
    }

    void fromInfixToPostfix(string &_destStr)
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

    int cal(string _eqaStr)
    {
        string::iterator iter = _eqaStr.begin();
        stack<int> numberStack;
        int result;

        while(*iter)
        {
            // If there is number
            if(isNumber(*iter))
            {
                result = 0;

                while(isNumber(*iter))
                {
                    result = (result * 10) + *iter - '0';

                    iter++;
                }

                numberStack.push(result);
            }
            // If there is operator
            else if(isOperator(*iter))
            {
                int operand2 = numberStack.top();
                numberStack.pop();
                int operand1 = numberStack.top();
                numberStack.pop();

                switch(*iter)
                {
                    case '+':
                        numberStack.push(operand1 + operand2);
                        break;
                    case '-':
                        numberStack.push(operand1 - operand2);
                        break;
                    case '*':
                        numberStack.push(operand1 * operand2);
                        break;
                    case '/':
                        numberStack.push(operand1 / operand2);
                        break;
                    default:
                        break;        
                }

                iter++;
            }
            else
            {
                iter++;
            }

        }

        result = numberStack.top();
        numberStack.pop();

        return result;
    }
    
private:
    string infixStr;
    string postfixStr;
    char seperateCh;
};

int main()
{
    string sentance, postStr;

//    getline(cin,sentance);

    sentance = string("10+(20*3)+2");
 
    cout << "========== Before Postfix ==========" << endl;   

    cout << "Your Sentance : " << sentance << endl;

    Postfix fix(sentance);    

    cout << "========== After Postfix ===========" << endl;

    fix.fromInfixToPostfix(postStr);

    cout << postStr << endl;

//    fix.cal(postStr);

    cout << "The result : " << fix.cal(postStr) << endl;

    return 0;
}
