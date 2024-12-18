#include <bits/stdc++.h>  // For input and output

using namespace std;

int main() {
    // Declare variables
    int number;
    int sum = 0;

    // Ask for user input
    cout << "Enter a positive integer (or -1 to stop): ";
    cin >> number;

    // Loop until the user enters -1
    while (number != -1) {
        if (number > 0) {
            sum += number;  // Add the number to the sum
        } else {
            cout << "Please enter a positive number." << endl;
        }

        cout << "Enter another positive integer (or -1 to stop): ";
        cin >> number;
    }

    // Output the result
    cout << "The sum of all positive numbers entered is: " << sum << endl;

    return 0;
}
