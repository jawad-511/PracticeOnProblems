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

float totalMonths(float loanAmount,float monthlyInstallment)
{
    return (float) loanAmount / monthlyInstallment;
}


int main()
{

    
    int loanAmount = readPositiveNumber("Enter the loan amount");
    int monthlyInstallment = readPositiveNumber("Enter the monthly installment amount");

    cout << "\nTotal Months to pay = " << totalMonths(loanAmount, monthlyInstallment) << endl;
    

    return 0;
}