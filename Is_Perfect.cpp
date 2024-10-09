#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n < 2) return false;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPerfect(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}
