#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    return number;
}

void PowerTwoAndThreeAndFour(int n)
{
    int power2 = n * n;
    int power3 = n * n * n;
    int power4 = n * n * n * n;

    cout << "Power2 " << power2 << endl;
    cout << "Power3 " << power3 << endl;
    cout << "Power4 " << power4 << endl; 
}
int main()
{

    PowerTwoAndThreeAndFour(readNumber());
    return 0;
}