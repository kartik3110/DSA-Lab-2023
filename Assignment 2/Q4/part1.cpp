#include <iostream>
#include "node.cpp"
using namespace std;
node *reverse(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *temp = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
int main()
{
    node n1(10);
    node n2(20);
    node n3(30);
    node n4(40);
    node n5(50);
    node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    head = reverse(head);
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}