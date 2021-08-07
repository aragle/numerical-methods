#include<bits/stdc++.h>

using namespace std;

double func(double m)
{
    return 4*exp(-m)*sin(m)-1;
}

void FalsePosition(double a, double b, double error)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double x = a;
    int iteration = 1;

    while(func(a)>error || func(b)>error){

        cout<< fixed
        << " Iteration=" << iteration
        << "\ta=" << a << "\tb=" << b;

        x = (a*func(b) - b*func(a)) / (func(b) - func(a));

        // xn+1 = a*f(b) - b*f(a) / {f(b) - f(a)}

        if (func(x)==0)
        {
            break;
        }
        else if(func(x)*func(a) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }

        cout << "\tx" << iteration << "=" << x;
        cout << "\tf(x" << iteration << ")=" << func(b) << endl << endl;

        iteration++;
    }
    cout << endl << endl << " The root is " << setprecision(3) << x << endl;
}

int main()
{
    double a = 0, b = 0.5, error = 0.0001;
    FalsePosition(a, b, error);
    return 0;
}
