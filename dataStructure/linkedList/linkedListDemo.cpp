//LinkedListDemo.cpp
#include <iostream>
#include "linkedList.h"

using namespace std;

int main() {

    LinkedList* list = new LinkedList();
    list->appendNode(10);
    list->appendNode(20);
    list->appendNode(30);
    list->displayNodes();
    list->displayNodesReverse();
    delete list;

    return 0;
}