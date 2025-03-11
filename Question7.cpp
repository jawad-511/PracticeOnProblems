#include <iostream> 
using namespace std;

int readNumber()
{
    int number;

    cout << "Please Enter a number\n";
    cin >> number;

    return number;
}

float calculateHalfOfNumber(int number)
{
    return (float) number / 2;
}

void printResult(float HalfNumber)
{
    cout << "The Half of " << HalfNumber * 2 << " is " << HalfNumber << endl;
}

int main()
{

    printResult(calculateHalfOfNumber(readNumber()));

    return 0;
}