#include <iostream>
using namespace std;

int readNumber(){

    int n;
    cout << "Enter a number\n";
    cin >> n;
 
    return n;
}

void printRangeFrom1ToN_UsingWhile(int number)
{
    int i = number;
    cout << "Range printed using while" << endl;
    while(i >= 1)
    {
        cout << i << endl;
        i--;
    }
}


void printRangeFrom1ToN_UsingDoWhile(int number)
{
    int i = number;
    cout << "Range printed using do while" << endl;
    do
    {
        cout << i << endl;
        i--;
    } while (i >= 1);
    
}

void printRangeFrom1ToN_UsingFor(int number)
{
    cout << "Range printed using For" << endl;
    for(int i = number; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{

    int n = readNumber();
    printRangeFrom1ToN_UsingFor(n);
    printRangeFrom1ToN_UsingWhile(n);
    printRangeFrom1ToN_UsingDoWhile(n);

    return 0;
}