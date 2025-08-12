#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function with no return value
void greet(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

int main()
{
    int result = add(10, 20);
    cout << "Sum: " << result << endl;
    greet("Alice");
    return 0;
}
