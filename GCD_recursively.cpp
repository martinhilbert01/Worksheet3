// Algorithm which calculates the greates common divisor recursively

// Nach folgenden Formeln:
// gcd(a, 0) = a (1)
// gcd(a, b) = gcd(b, a mod b)

#include <iostream>

int gcd(int n1, int n2) {
    int c = n1 % n2;
    std::cout << n1 << " modulo " << n2 << " = " << c << "\n";
    if (c == 0) {
        return n2;
    }
    return gcd(n2, c);
}

int main() {
    int a = 96;
    int b = 64;
    int result{};


     if (a == 0) {
        result = b;
    } else if (b == 0) {
        result = a;
    } else {
        result = gcd(a,b);
    }

    std::cout << "Der größte gemeinsame Teiler ist: " << result << "\n";

    return 0;
}