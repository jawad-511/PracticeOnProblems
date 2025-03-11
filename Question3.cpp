#include <iostream>
using namespace std;
enum enNumberType{Odd=1, Even=2};

int readNumber()
{
    int number;
    cout << "Enter a number to check whether its Odd or Even\n";
    cin >> number;

    return number;
}

enNumberType checkNumberType(int number)
{
    int result = number % 2;
    if(result == 0)
    {
        return enNumberType::Even;
    }
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType numberType)
{
    if(numberType == enNumberType::Even)
    {
        cout << "Numebr is Even\n";
    }
    else
    cout << "Number is Odd\n";
}
int main()
{
    PrintNumberType(checkNumberType(readNumber()));
    return 0;
}