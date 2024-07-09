#include <iostream>

class Complex {
private:
    double real, imag;

public:
    // Default constructor
    Complex() : real(0.0), imag(0.0) {}

    // Constructor with one argument (initialize real and imag to equal values)
    Complex(double value) : real(value), imag(value) {}

    // Constructor with two arguments (initialize real and imag to different values)
    Complex(double realValue, double imagValue) : real(realValue), imag(imagValue) {}

    // Addition of two complex numbers
    Complex add(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Display complex number
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    // Create complex numbers using user input
    double real1, imag1, real2, imag2;

    std::cout << "Enter real and imaginary parts for Complex Number 1: ";
    std::cin >> real1 >> imag1;

    std::cout << "Enter real and imaginary parts for Complex Number 2: ";
    std::cin >> real2 >> imag2;

    Complex complex1(real1, imag1);
    Complex complex2(real2, imag2);

    // Display the initial complex numbers
    std::cout << "Complex Number 1: ";
    complex1.display();
    std::cout << "Complex Number 2: ";
    complex2.display();

    // Perform addition
    Complex result = complex1.add(complex2);

    // Display the result
    std::cout << "Result of addition: ";
    result.display();

    return 0;
}
