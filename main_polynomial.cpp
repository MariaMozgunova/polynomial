#include "polynomial.cpp"

int main() {
    std::cout << "\n=== test io, [] ===\n";
    {
        Polynomial p;
        std::cin >> p;
        std::cout << p << p[2] << '\n';
    }

    std::cout << "\n=== test copy assignment op ===\n";
    {
        std::vector<double> coef = {1, 0, 3.8, 0};
        Polynomial p1(coef);
        Polynomial p2;
        p2 = p1;
        p1.add(8);
        std::cout << p2 << p1;  // second polynomial doesn't change
    }

    std::cout << "\n=== test == and != ===\n";
    {       
        std::vector<double> coef = {1, 0, 3.8, 0};
        Polynomial p1(coef);
        Polynomial p2;
        p2 = p1;
        std::cout << (p1 == p2) << ' ' << (p1 != p2) << '\n';
        p1.clear();
        std::cout << (p1 == p2) << ' ' << (p1 != p2);
    }

    std::cout << "\n=== test +, -, +=, -= ===\n";
    {
        std::vector<double> coef1 = {1, -2, 3.8, -8.97};
        std::vector<double> coef2 = {6, 876, -12635.786};
        Polynomial p1(coef1), p2(coef2);
        std::cout << (+p1) << (-p1);
        std::cout << (p1 + p2) << (p1 - p2);
        p1 += p2;
        std::cout << p1;
        p1 -= p2;
        std::cout << p1;
    }

    std::cout << "\n=== test *, /, *=, /= ===\n";
    {
        std::vector<double> coef = {1, -2, 3.8, -8.97};
        Polynomial p(coef);
        std::cout << (p * 2) << (p / -1.5);
        p *= 2;
        std::cout << p;
        p /= 2;
        std::cout << p;
    }
}