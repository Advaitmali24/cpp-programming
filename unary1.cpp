#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void display()
    {
        cout << "Number = " << num << endl;
    }

    // Unary operator overloading
    void operator++()
    {
        ++num;
    }
};

int main()
{
    Number n;

    n.getData();

    cout << "\nBefore increment:" << endl;
    n.display();

    ++n;   // Calls overloaded ++ operator

    cout << "\nAfter increment:" << endl;
    n.display();

    return 0;
}