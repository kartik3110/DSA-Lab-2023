#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        next = NULL;
        this->data = data;
    }
};
