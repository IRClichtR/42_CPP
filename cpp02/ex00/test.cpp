#include <iostream>

class Complex {
public:
    double real;
    double imag;

  Complex() : real(0.0), imag(0.0) {}
  Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }
};

int main() {
    Complex c1(1.0, 2.0);
    Complex c2(2.0, 3.0);

    Complex sum = c1 + c2;  // Utilisation de l'opérateur surchargé +

    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;

    return 0;
}

