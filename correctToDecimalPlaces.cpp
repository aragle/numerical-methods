#include <bits/stdc++.h>

using namespace std;

int main() {

    double value = 6.540;
    cout<<" Given number = " << value << endl << endl;

    string str, numberAfterDecimalPoint;

    stringstream out;
    out << value;

    str = out.str();

    numberAfterDecimalPoint = str.substr(str.find(".")+1);

    cout<<" Number of decimal places = " << numberAfterDecimalPoint.length() << endl << endl;

    int n = numberAfterDecimalPoint.length();

    double absoluteError = 0.5 * pow(10,-n);

    cout << " Absolute Error = " << absoluteError << endl << endl;

    return 0;
}
