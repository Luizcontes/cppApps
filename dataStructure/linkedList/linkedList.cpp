//LinkedList.cpp
#include <iostream>
#include <cstddef>
#include "linkedList.h"

using namespace std;

LinkedList::LinkedList() {

    front = NULL;
    back = NULL;
}

LinkedList::~LinkedList() {

    destroyList();
}

void LinkedList::appendNode(int data) {

    Node* n = new Node(data);
    if(back == NULL) {
        back = n;
        front = n;
    }
    else {
        back->next = n;
        n->previous = back;
        back = n;
    }
}

void LinkedList::displayNodes() {

    cout << "Nodes:";
    NODE* temp = front;

    while(temp != NULL) {
        cout << " " << temp->data;
        temp = temp->next;
    }
}

void LinkedList::displayNodesReverse() {

    cout << "Nodes in reverse order:";
    NODE* temp = back;
    while(temp != NULL) {
        cout << " " << temp->data;
        temp = temp->previous;
    }
}

void LinkedList::destroyList() {

    NODE* temp = back;
    while(temp != NULL) {
        NODE* temp2 = temp;
        temp = temp->previous;
        delete temp2;
    }

    back = NULL;
    front = NULL;
}