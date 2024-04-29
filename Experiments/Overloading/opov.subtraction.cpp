#include<iostream>
using namespace std;

class Complex {
private:
    float real;
    float img;

public:
    Complex();
    Complex(float r, float i);
    void setReal(float r);
    void setImg(float i);
    float getReal();
    float getImg();
    Complex operator-(const Complex& c2); 
};

Complex::Complex() {
    real = 0;
    img = 0;
}

Complex::Complex(float r, float i) {
    real = r;
    img = i;
}

void Complex::setReal(float r) {
    real = r;
}

float Complex::getReal() {
    return real;
}

void Complex::setImg(float i) {
    img = i;
}

float Complex::getImg() {
    return img;
}

Complex Complex::operator-(const Complex& c2) { 
    Complex c3;
    c3.real = real - c2.real;
    c3.img = img - c2.img;
    return c3;
}

int main() {
    float r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2), c3;

      c3 = c1 - c2;
    cout << "subtraction: " << c3.getReal() << " - " << c3.getImg() << "i";

    return 0;
}
