#include <iostream>

int summation(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 10;
    std::cout << "Sum of " << a << " and " << b << " is: " << summation(a, b) << std::endl;
    return 0;
}
