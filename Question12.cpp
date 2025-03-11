#include <iostream>
using namespace std;
void readTwoNumbers(int &n1, int &n2)
{
    cout << "Please enter the First number\n";
    cin >> n1;

    cout << "Please enter the Seceond number\n";
    cin >> n2;
}

int checkMaxOfTwoNumbers(int n1,int n2)
{
    if(n1 > n2)
    {
        return n1;
    }
    else if(n2 > n1)
    {
        return n2;
    }
    else
        return 0;
}

void printResults(int max)
{
    cout << "The max number is: " << max << endl;
}
int main()
{
    int n1, n2;
    readTwoNumbers(n1,n2);
    printResults(checkMaxOfTwoNumbers(n1, n2));
    
    return 0;
}