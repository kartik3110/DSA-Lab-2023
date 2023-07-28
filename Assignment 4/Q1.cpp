#include <iostream>
using namespace std;
class Stack
{
    int *data;
    int capacity;
    int nextIndex;

public:
    Stack()
    {
        capacity = 5;
        data = new int[capacity];
        nextIndex = 0;
    }

    bool isEmpty()
    {
        return (nextIndex == 0);
    }
    bool isFull()
    {
        return (nextIndex == capacity);
    }

    void push(int element)
    {
        if (isFull())
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int stackTop()
    {
        return data[nextIndex - 1];
    }
    void pop()
    {
        if (isEmpty())
        {
            return;
        }
        nextIndex--;
    }
    int peek(int index)
    {
        int temp = nextIndex - 1;
        for (int i = 0; i < index; i++)
        {
            temp--;
        }
        return data[temp];
    }
};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.pop();

    cout << "element at index 2 is:" << s1.peek(2) << endl;
    cout << "element at top is:" << s1.stackTop() << endl;
    cout << "is the stack full?: " << s1.isFull() << endl;
    cout << "is the stack empty?: " << s1.isEmpty() << endl;
}
