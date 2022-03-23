//queueProgram.cpp
#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    Queue* queue = new Queue(8);

    queue->enqueue(10);
    queue->enqueue(20);
    queue->enqueue(30);

    for (int i=0; i<3; i++) {
        cout << queue->dequeue() << endl;
    }
    return 0;
}