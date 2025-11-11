#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "=== Polynomial Evaluation using Horner's Method ===\n";
    cout << "Enter the degree of the polynomial: ";
    cin >> n;

    vector<double> coeff(n + 1);
    double x, result = 0;

    cout << "Enter the coefficients (a0 a1 ... an): ";
    for (int i = 0; i <= n; i++) {
        cin >> coeff[i];
    }

    cout << "Enter the value of x: ";
    cin >> x;

    // Horner’s Method
    for (int i = n; i >= 0; i--) {
        result = result * x + coeff[i];
    }

    cout << "\nThe value of the polynomial at x = " << x << " is " << result << endl;
    cout << "=== End of Program ===" << endl;
    return 0;
}

