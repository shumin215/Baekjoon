#include "postfix.h"

int main()
{
    char buf[9999];

    string sentance, postStr;

    scanf("%s", buf);

    sentance = buf;

    Postfix fix(sentance);    

    fix.fromInfixToPostfix(postStr);

    cout << postStr << endl;

    return 0;
}
