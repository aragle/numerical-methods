#include<bits/stdc++.h>

using namespace std;

double func(double x)
{
    return 4*exp(-x)*sin(x)-1;
}

void Bisection(double a, double b, double error)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "There is no root between a and b.";
        return;
    }

    double x = a;
    int iteration = 1;

    while(abs(b-a)>error)
    {
        cout << fixed
        << " Iteration=" << iteration
        << "\ta=" << a
        << "\tb=" << b;

        x = (a+b)/2;

        if(func(x) == 0.0)
            break;

        else if (func(x)*func(a) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }


            cout << "\tx" << iteration << "=" << x
            << setprecision(5) << "\tErr" << "=" << abs(b-a)
            << endl << endl;


        iteration++;
    }

    cout << endl << endl << " The root is " << setprecision(3) << x << endl;
}

int main()
{
    double a = 0, b = 0.5, error = 0.0001;
    Bisection(a, b, error);
    return 0;
}
