#include <iostream>
using namespace std;

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

float calculateRemiender(int totalBill, int cashPaid)
{
    return cashPaid - totalBill;
}
int main()
{

   int totalBill = readPositiveNumber("Please Enter the total bill");
   int cashPaid = readPositiveNumber("Please Enter the total cash paid");
   
   cout << "******************************************\n";
   cout << "Total bill = " << totalBill << endl;
   cout << "Total cash paid = " << cashPaid << endl;
   cout << "Remainder " << calculateRemiender(totalBill, cashPaid);

    return 0;
}