#include <iostream>
using namespace std;

enum enPrimetNotPrime{Prime = 1, NotPrime = 2};
float readPositiveNumber(string message)
{
    int n = 0;
    do
    {
        cout << message << endl;
        cin >> n;
    }while(n < 0);   

    return n;
  
}

enPrimetNotPrime checkPrimeNumebr(int number)
{
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return enPrimetNotPrime::NotPrime;
        }
    }
    return enPrimetNotPrime::Prime;
}

void printNumberType(int number)
{
    switch (checkPrimeNumebr(number))
    {
    case enPrimetNotPrime::Prime:
        cout << "The number is prime\n";
        break;

    case enPrimetNotPrime::NotPrime:
        cout << "The number is Not Prime\n";
        break;
    
    default:
        break;
    }
}
int main()
{
    printNumberType(readPositiveNumber("Please Enter a positive number\n"));

    return 0;
}