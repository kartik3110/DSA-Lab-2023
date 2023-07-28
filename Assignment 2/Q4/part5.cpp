#include <iostream>
#include "node.cpp"
using namespace std;

int main()
{
    node n1(10);
    node n2(20);
    node n3(30);
    node n4(40);
    node n5(90);
    node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    node *temp = head;
    bool is_sorted = true;
    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
        {
            is_sorted = false;
            cout << "not sorted" << endl;
            break;
        }
        temp = temp->next;
    }
    if (is_sorted)
        cout << "sorted";
    return 0;
}