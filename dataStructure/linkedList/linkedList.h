// LinkedList.h
typedef struct node
{
    int data;
    struct Node *previous;
    struct Node *next;
    
    struct Node(int data)
    {
        this->data = data;
        previous = NULL;
        next = NULL;
    }
    
} NODE;

class LinkedList
{
private:
    NODE *front;
    NODE *back;

public:
    LinkedList();
    ~LinkedList();
    void appendNode(int);
    void displayNodes();
    void displayNodesReverse();
    void destroyList();
};
