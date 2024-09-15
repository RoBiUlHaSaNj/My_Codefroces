#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Function to calculate sum of divisors
int sumOfDivisors(int n) {
    int sum = 0;
    int sqrt_n = sqrt(n);

    for (int i = 1; i <= sqrt_n; ++i) {
        if (n % i == 0) { // If i is a divisor
            sum += i; // Add the divisor i
            if (i != n / i) { // Avoid adding the square root twice
                sum += n / i; // Add the corresponding divisor n / i
            }
        }
    }

    return sum;
}

// Function to count the number of divisors
int countOfDivisors(int n) {
    int count = 0;
    int sqrt_n = sqrt(n);

    for (int i = 1; i <= sqrt_n; ++i) {
        if (n % i == 0) { // If i is a divisor
            count++; // Count the divisor i
            if (i != n / i) { // If i is not the square root
                count++; // Count the corresponding divisor n / i
            }
        }
    }

    return count;
}

// Function to list all divisors
vector<int> listOfDivisors(int n) {
    vector<int> divisors;
    int sqrt_n = sqrt(n);

    for (int i = 1; i <= sqrt_n; ++i) {
        if (n % i == 0) { // If i is a divisor
            divisors.push_back(i); // Add the divisor i
            if (i != n / i) { // Avoid adding the square root twice
                divisors.push_back(n / i); // Add the corresponding divisor n / i
            }
        }
    }

    return divisors;
}

int main() {
    int n;
    cin >> n;

    // Calculate and print sum of divisors
    cout << "Sum of Divisors: " << sumOfDivisors(n) << endl;

    // Calculate and print count of divisors
    cout << "Count of Divisors: " << countOfDivisors(n) << endl;

    // Get and print list of divisors
    vector<int> divisors = listOfDivisors(n);
    cout << "Divisors: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}
