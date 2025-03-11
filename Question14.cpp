#include <iostream>
using namespace std;

void readNumbers(int &n1, int &n2)
{
    cout << "Please Enter Number 1\n";
    cin >> n1;

    cout << "Please Enter Number 2\n";
    cin >> n2;
}

void swap(int &n1 , int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void printResult(int number1, int number2)
{
    cout << "number1: " << number1 << " number2: " << number2 << endl;
}
int main()
{

    int n1, n2 = 0;
    readNumbers(n1, n2);
    printResult(n1, n2);
    swap(n1, n2);
    printResult(n1, n2);
    
    return 0;
}