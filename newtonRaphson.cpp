#include<bits/stdc++.h>

using namespace std;

float f(double x)
{
    return x * sin(x) + cos(x);
}

float f_inv(double x)
{
    return x * cos(x);
}
int main()
{
    double x0 = 3.1416, xn;

    int i=0;

    do
    {
        xn = x0 - (f(x0)/f_inv(x0));
        // xn = xn-1 - (f(xn-1)/f'(xn-1))

        cout << fixed
        << " n = " << i
        << "\tx" << i <<"=" << x0
        << "\tf(x" << i <<") = " << f(x0)
        << "\tx" << i+1 << " = " << xn << endl;

        i++;

        x0 = xn;

    }while(abs(f(xn))>0.000000000000001);

    cout << endl << endl << " The root is " << setprecision(3) << xn << endl;

    return 0;
}
