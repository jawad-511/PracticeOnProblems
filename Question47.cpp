#include <iostream>
using namespace std;


int readPositiveNumber(string message)
{
    int n = 0;
    do
    {
        cout << message << endl;
        cin >> n;
    }while(n < 0);   

    return n;
  
}

float totalMonths(float loanAmount,float monthOfFinish)
{
    return (float) loanAmount / monthOfFinish;
}


int main()
{

    
    int loanAmount = readPositiveNumber("Enter the loan amount");
    int monthOfFinish = readPositiveNumber("How many months");

    cout << "\nMonthly Installment = " << totalMonths(loanAmount, monthOfFinish) << endl;
    

    return 0;
}