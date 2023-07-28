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
    cout << "enter the index to be deleted: ";
    cin >> x;
    while (count < x - 1)
    {
        count++;
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
    // print
    node *temp3 = head;
    while (temp3 != NULL)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }

    return 0;
}