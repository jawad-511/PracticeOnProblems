#include <iostream>
using namespace std;

enum enOddOrEven{Odd = 1, Even = 2};

int readNumber()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;

    return number;
}

enOddOrEven checkOddOrEven(int n)
{
    if(n % 2 == 0)
    {
        return enOddOrEven::Even;
    }
    else
        return enOddOrEven::Odd;
}

int sumEvenNumbersFrom1ToN_UsingFor(int n)
{
    int sum = 0;
    cout << "Sum odd using For" << endl;
    for(int i = 1; i <= n; i++)
    {
        if(checkOddOrEven(i) == enOddOrEven::Even)
        {
            sum += i;
        }

    }
    return sum;
}

int sumEvenNumbersFrom1ToN_UsingWhile(int n)
{
    int sum = 0;
    int i = 1;
    cout << "Sum odd using While" << endl;
   while(i <= n)
   {
    if(checkOddOrEven(i) == enOddOrEven::Even)
    {
        sum += i;
    }
    i++;
   }
    return sum;
}

int sumEvenNumbersFrom1ToN_UsingDoWhile(int n)
{
    int sum = 0;
    int i = 1;
    cout << "Sum odd using Do While" << endl;
   do
   {
    
    if(checkOddOrEven(i) == enOddOrEven::Even)
    {
        sum += i;
    }
    i++;
   }while(i <= n);

    return sum;
}



void printResult(int sum)
{
    cout << "The sum is " << sum << endl;
}

int main()
{
    int n = readNumber();
    printResult(sumEvenNumbersFrom1ToN_UsingFor(n));
    printResult(sumEvenNumbersFrom1ToN_UsingWhile(n));
    printResult(sumEvenNumbersFrom1ToN_UsingDoWhile(n));
}