// Algorithm which calculates the greates common divisor recursively

// Nach folgenden Formeln:
// gcd(a, 0) = a (1)
// gcd(a, b) = gcd(b, a mod b)

#include <iostream>

int gcd(int a, int b) {
    for (int c = a % b; c > 0;) {
        std::cout << c << "\n";
        gcd(b, c);
    }
    return a;
}

int main() {
    int a = 48;
    int b = 18;
    int result{};

     if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        result = gcd(a,b);
    }

    std::cout << "Der größte gemeinsame Teiler ist: " << result << "\n";

    return 0;
}