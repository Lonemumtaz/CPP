#include <iostream>
using namespace std;

int main()
{
    // For loop
    cout << "For loop (1-5): ";
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // While loop
    cout << "While loop countdown: ";
    int count = 3;
    while (count > 0)
    {
        cout << count << " ";
        count--;
    }
    cout << endl;
    return 0;
}
