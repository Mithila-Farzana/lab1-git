#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    long long fact = factorial(num);
    if (fact != -1)
        cout << "Factorial of " << num << " = " << fact << endl;

    return 0;
}

