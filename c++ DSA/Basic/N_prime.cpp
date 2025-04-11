#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of primes you want to print: ";
    cin >> n;

    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            ++count;
        }
        ++num;
    }
    return 0;
}
