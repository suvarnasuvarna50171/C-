#include <iostream>
using namespace std;
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 15;
    int num2 = 25;

    // Call the function and store the result
    int result = addNumbers(num1, num2);
  cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}\
