#include <iostream>
using namespace std;

int main()
{
    // Array declaration and initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify array element
    numbers[2] = 99;
    cout << "After modification: " << numbers[2] << endl;
    return 0;
}
