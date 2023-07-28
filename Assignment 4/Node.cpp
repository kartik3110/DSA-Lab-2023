#include <iostream>
using namespace std;
class Node
{
    int data;
    int *next;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};