#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    int year;
    void display()
    {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main()
{
    Car c1;
    c1.model = "Toyota";
    c1.year = 2022;
    c1.display();
    return 0;
}
