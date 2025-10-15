#include <iostream>
using namespace std;
class Math {
public:
    // Static function to calculate factorial
    static int factorial(int n) {
        if (n < 0) {
            throw invalid_argument("Factorial is not defined for negative numbers.");
        }
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    // Static function to calculate square
    static int square(int n) {
        return n * n;
    }

    // Static function to calculate cube
    static int cube(int n) {
        return n * n * n;
    }
};

int main() {
    try {
        cout << "Factorial of 5: " << Math::factorial(5) << endl; // Output: 120
        cout << "Square of 4: " << Math::square(4) << endl;       // Output: 16
        cout << "Cube of 3: " << Math::cube(3) << endl;           // Output: 27
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

