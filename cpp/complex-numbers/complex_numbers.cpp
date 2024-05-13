#include "complex_numbers.h"
#include <cmath>

namespace complex_numbers {
    Complex::Complex(double real, double imag): Real(real), Imag(imag) {}

    // Getters for real and imaginary parts
    double Complex::real() const { return Real; }
    double Complex::imag() const { return Imag; }

    //define + operator
    Complex Complex::operator+(const Complex& c) const{
        return Complex(Real + c.Real, Imag + c.Imag);
    }

    //define - operator
    Complex Complex::operator-(const Complex& c) const{
        return Complex(Real - c.Real, Imag - c.Imag);
    }

    //define * operator
    Complex Complex::operator*(const Complex& c) const{
        double realPart = Real * c.Real - Imag * c.Imag;
        double imagPart = Imag * c.Real + Real * c.Imag;
        return Complex(realPart, imagPart);
    }

    //define / operator
    Complex Complex::operator/(const Complex& c) const{
        double divisor = c.Real * c.Real + c.Imag * c.Imag;
        double realPart = (Real * c.Real + Imag * c.Imag) / divisor;
        double imagPart = (Imag * c.Real - Real * c.Imag) / divisor;
        return Complex(realPart, imagPart);
    }

    // Conjugate
    Complex Complex::conj() const {
        return Complex(Real, -Imag);
    }

    // Absolute value
    double Complex::abs() const {
        return sqrt(Real * Real + Imag * Imag);
    }

    // Exponential function
    Complex Complex::exp() const {
        double expRealPart = ::exp(Real) * cos(Imag);
        double expImagPart = ::exp(Real) * sin(Imag);
        return Complex(expRealPart, expImagPart);
    }

    // Addition operator for real number + complex number
    Complex operator+(const double d, const Complex& c) {
        return Complex(d + c.real(), c.imag());
    }

    // Subtraction operator for real number - complex number
    Complex operator-(const double d, const Complex& c) {
        return Complex(d - c.Real, -c.Imag);
    }

    // Multiplication operator for real number * complex number
    Complex operator*(const double d, const Complex& c) {
        return Complex(d * c.Real, d * c.Imag);
    }

    // Division operator for real number / complex number
    Complex operator/(const double d, const Complex& c) {
        double divisor = c.Real * c.Real + c.Imag * c.Imag;
        double realPart = (d * c.Real) / divisor;
        double imagPart = (-d * c.Imag) / divisor;
        return Complex(realPart, imagPart);
    }   
}  // namespace complex_numbers
