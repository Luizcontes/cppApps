#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int calculator(char cOperator, int nOper1, int nOper2);

int main(int nNumberofArgs, char *pszArgs[])
{
    char pause;

    int nOper1;
    int nOper2;
    char cOperator;
    cout << "Enter 'value1 op value2'\n"
         << "Where op is +, -, *, / or %:" << endl;
    cin >> nOper1 >> cOperator >> nOper2;

    cout << nOper1 << " "
         << cOperator << " "
         << nOper2 << " = "
         << calculator(cOperator, nOper1, nOper2)
         << endl;

    cin >> pause;

    return 0;
}

int calculator(char cOperator, int nOper1, int nOper2)
{

    int nResult = 0;
    switch (cOperator)
    {

    case '+':
        nResult = nOper1 + nOper2;
        break;
    case '-':
        nResult = nOper1 - nOper2;
        break;
    case '*':
    case 'x':
    case 'X':
        nResult = nOper1 * nOper2;
        break;
    case '/':
        if(nOper2 != 0)
            nResult = nOper1 / nOper2;
        break;
    case '%':
        nResult = nOper1 % nOper2;
        break;
    default:
        cout << "Is not a valid operand";
    }
    return nResult;
}