#include <iostream>
#include <cmath>
using namespace std;

int readNumber()
{
    int number = 0;
    cout << "Enter a number" << endl;
    cin >> number;

    return number;
}

int readPower()
{
    int m = 0;
    cout << "Enter m" << endl;
    cin >> m;

    return m;
}

int powerOfM(int number, int m)
{
    if(m == 0)
    {
        return 1;
    }
    int result = pow(number, m);
    
    return result;
}

int main()
{
    int num = readNumber();
    int power = readPower();
    int result = powerOfM(num, power);

    cout << "The Result = " << result << endl;
    return 0;
}