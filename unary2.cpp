#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number(int n)
    {
        num = n;
    }

    Number increment()
    {
        return Number(num + 1);
    }

    void display()
    {
        cout << "Number = " << num << endl;
    }
};

int main()
{
    Number n1(10);

    cout << "Before increment:" << endl;
    n1.display();

    Number n2 = n1.increment();

    cout << "After increment:" << endl;
    n2.display();

    return 0;
}