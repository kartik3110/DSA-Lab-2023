#include <iostream>
#include "node.cpp"
using namespace std;

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

    node *temp = head;
    int x, count = 0;
    cout << "enter the element to be found: ";
    cin >> x;
    cout << "index is: ";
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            cout << count << " ";
        }
        count++;
        temp = temp->next;
    }
    return 0;
}