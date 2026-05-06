#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
            count++;
    }
    cout << n << " has " << count << " divisors." << endl;
    return 0;
}
