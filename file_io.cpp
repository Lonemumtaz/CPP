#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("sample.txt");
    outFile << "Hello from file!" << endl;
    outFile.close();

    string line;
    ifstream inFile("sample.txt");
    getline(inFile, line);
    cout << "Read: " << line << endl;
    inFile.close();
    return 0;
}
