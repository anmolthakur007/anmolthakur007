#include<iostream>

using namespace std;

class complex
{
    float real;
    float imaginary;

public:
    complex() {}
    complex(float x, float y)
    {
        real = x;
        imaginary = y;
    }

    complex operator + (complex c)
    {
        complex result;
        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;
        return result;
    }

    complex operator * (complex c)
    {
        complex result;
        result.real = real * c.real - imaginary * c.imaginary;
        result.imaginary = real * c.imaginary + imaginary * c.real;
        return result;
    }

    void display()
    {
        cout << real << " + i" << imaginary << "\n";
    }


    friend complex operator - (complex ca, complex cb);
    friend complex operator / (complex ca, complex cb);
};


complex operator - (complex ca, complex cb)
{
    complex result;
    result.real = ca.real - cb.real;
    result.imaginary = ca.imaginary - cb.imaginary;
    return result;
}


complex operator / (complex ca, complex cb)
{
    complex result;
    float denominator = cb.real * cb.real + cb.imaginary * cb.imaginary;
    result.real = (ca.real * cb.real + ca.imaginary * cb.imaginary) / denominator;
    result.imaginary = (ca.imaginary * cb.real - ca.real * cb.imaginary) / denominator;
    return result;
}

int main()
{
    complex C1, C2, C3, C4, C5, C6;
    C1 = complex(6, 4);
    C2 = complex(3, 2);

    C3 = C1 + C2;
    C4 = C1 * C2;
    C5 = C1 - C2;
    C6 = C1 / C2;

    cout << " C1 = ";
    C1.display();
    cout << " C2 = ";
    C2.display();

    cout << "Addition:" << "\n";
    cout << " C3 = ";
    C3.display();

    cout << "Multiplication:" << "\n";
    cout << " C4 = ";
    C4.display();

    cout << "Subtraction:" << "\n";
    cout << " C5 = ";
    C5.display();

    cout << "Division:" << "\n";
    cout << " C6 = ";
    C6.display();

    return 0;
}
