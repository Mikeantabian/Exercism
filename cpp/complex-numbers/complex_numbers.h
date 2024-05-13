#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H

namespace complex_numbers {
    class Complex{
        public:
            Complex(double real = 0., double imag = 0.); //constructor

            // Getters for real and imaginary parts
            double real() const;
            double imag() const;

            Complex operator+(const Complex&) const; // + operator function overloaded
            Complex operator-(const Complex&) const; // - operator function overloaded
            Complex operator*(const Complex&) const; // * operator function overloaded
            Complex operator/(const Complex&) const; // / operator function overloaded

            //Complex operator+(const double d, const Complex& c) const;
            // Declare friend function for addition of a double to a Complex
            friend Complex operator+(const double d, const Complex& c);
            friend Complex operator-(const double d, const Complex& c);
            friend Complex operator*(const double d, const Complex& c);
            friend Complex operator/(const double d, const Complex& c);

            Complex conj() const;
            double abs() const;
            Complex exp() const;
        private:
            double Real, Imag;
    };
}  // namespace complex_numbers

#endif  // COMPLEX_NUMBERS_H
