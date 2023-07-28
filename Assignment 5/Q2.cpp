#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node *reverseLL(node *head)
{
    node *prev = NULL;
    node *current = head;
    node *n = current->next;
    while (current)
    {

        current->next = prev;
        prev = current;
        current = n;
        if (n)
            n = n->next;
    }
    return prev;
}
int main()
{
    node *head = new node(10);
    node *n1 = new node(20);
    node *n2 = new node(30);
    node *n3 = new node(40);
    node *n4 = new node(50);
    node *n5 = new node(60);
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    cout << "initial LL: " << endl;
    print(head);
    // find mid point
    node *slow = head;
    node *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *mid = slow;

    // split into two halves
    node *head2 = mid->next;
    mid->next = NULL;
    node *head1 = head;

    head2 = reverseLL(head2);
    // make dummy node
    head = new node(1);
    node *dummy = head;

    // connect the nodes
    while (head1 || head2)
    {
        if (head1)
        {
            dummy->next = head1;
            dummy = head1;
            head1 = head1->next;
        }
        if (head2)
        {
            dummy->next = head2;
            dummy = head2;
            head2 = head2->next;
        }
    }
    head = head->next; // skip the dummy node
    cout << "final LL: " << endl;
    print(head);
}