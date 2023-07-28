#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        cout << "area is: " << length * breadth << endl;
    }
    void perimeter()
    {
        cout << "perimeter is: " << 2 * (length + breadth) << endl;
    }
};
int main()
{
    Rectangle r1(30, 3);
    r1.perimeter();
    r1.area();
    return 0;
}