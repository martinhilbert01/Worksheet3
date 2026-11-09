// Algorithm which calculates the greates common divisor iteratively

// Nach folgenden Formeln:
// gcd(a, 0) = a (1)
// gcd(a, b) = gcd(b, a mod b)

#include <iostream>

int gcd(int n1, int n2) {
    for (int c = n1 % n2; c > 0;) {
        c = n1 % n2; 
        std::cout << n1 << " modulo " << n2 << " = " << c << "\n";
        n1 = n2;
        n2 = c;
    }
    return n1;
}

int main() {
    int a = 96;
    int b = 65;
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