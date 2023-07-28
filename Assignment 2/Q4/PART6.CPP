#include <iostream>
#include "node.cpp"
using namespace std;
node *merge(node *head1, node *head2)
{
    node *tail = NULL;
    node *head = NULL;
    if (head1->data <= head2->data)
    {
        head = head1;
        tail = head1;
        head1 = head1->next;
    }
    else
    {
        head = head2;
        tail = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        else
        {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    if (head2 == NULL) // 2nd LL got exhausted
    {
        while (head1 != NULL)
        {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
    }
    else // 1st LL got exhausted
    {
        while (head2 != NULL)
        {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }
    return head;
}
int main()
{
    node n1(10);
    node n2(20);
    node n3(30);
    node *head1 = &n1;
    n1.next = &n2;
    n2.next = &n3;

    node n4(60);
    node n5(70);
    node n6(80);
    node *head2 = &n4;
    n4.next = &n5;
    n5.next = &n6;
    node *head = merge(head1, head2);
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}