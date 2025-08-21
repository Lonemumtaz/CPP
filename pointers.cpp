#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;
    *ptr = 20;
    cout << "New value of x: " << x << endl;
    return 0;
}
