#include <iostream>
using namespace std;

void readNumbers(int &number1, int &number2, int &number3)
{
    cout << "Enter number 1\n";
    cin >> number1;

    cout << "Enter number 2\n";
    cin >> number2;

    cout << "Enter number 3\n";
    cin >> number3;
}

int sumOfThreeNumbers(int n1, int n2, int n3)
{
    int sum = n1 + n2 + n3;
    return sum;
}

void printResults(int sum)
{
    cout << "The sum is " << sum << endl;
}

int main()
{
    int n1, n2, n3;
    readNumbers(n1, n2, n3);
    printResults(sumOfThreeNumbers(n1,n2,n3));


    

    return 0;
}