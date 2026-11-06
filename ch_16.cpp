#include <iostream>
using namespace std;

int main() {
    long long num, sum = 0;  // long long allows larger numbers.
    cout << "enter a number : ";
    cin >> num;

    long long copy = num;  // Keeps the original number for comparison.

    if (num < 0) {  
        cout << "it is not an Armstrong number";
        return 0;
    }

    int count = 0;
    long long temp = num;

    do {
        count++;       
        temp /= 10;    // Removes the last digit.
    } while (temp > 0);

    cout << "number of digits " << count << "\n";

    while (num > 0) {
        int lastDigit = num % 10;  // Gets the last digit.
        long long power = 1;

        for (int i = 0; i < count; i++) {
            power *= lastDigit;  // Raises the digit to the digit count.
        }

        sum += power;  // Adds this digit's power to the sum.
        num /= 10;     // Removes the digit just processed.
    }

    cout << "Sum : " << sum << "\n";

    if (sum == copy) {
        cout << "It is an Armstrong number";
    } else {
        cout << "It is not an Armstrong number";
    }

    return 0;
}