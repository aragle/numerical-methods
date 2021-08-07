#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double givenValue, trueValue, absoluteError, relativeError, percentageError;
    
    givenValue = 3.1428571;
    trueValue = 3.1415926;
    
    absoluteError = abs(trueValue - givenValue);
    relativeError = abs(trueValue - givenValue) / trueValue;
    percentageError = (abs(trueValue - givenValue) / trueValue) * 0.01;
    
    cout << "Absolute Value = " << absoluteError << endl;
    cout << "Relative Value = " << relativeError <<endl;
    cout << "Percentage Value = " << percentageError << "%";
    
    return 0;
}