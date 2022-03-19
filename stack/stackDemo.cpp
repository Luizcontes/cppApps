//stackDemo.cpp
#include <iostream>
#include "stack.h"

using namespace std;

int main() {

    Stack* stack = new Stack();
    stack->push(10);
    stack->push(20);
    stack->push(30);

    for (int i=0; i<3; i++)
        cout << stack->pop() << endl;
    
    delete[] stack;

    return 0;
}