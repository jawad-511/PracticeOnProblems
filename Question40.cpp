#include <iostream>
using namespace  std;

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

float calculateServiceFeeAndSalesTax(float totalBill)
{
    totalBill = totalBill * 1.1;
    totalBill = totalBill * 1.16;
    return totalBill;
}

void printResult(float totalBillValue , float totalBill)
{
    cout << "\nTotalBill = " << totalBill << endl;
    cout << "TotalBill After Service and Fee Sales Tax = " << totalBillValue << endl;
}
int main()
{

    float totalBill = readPositiveNumber("Please Enter Total Bill\n");
    float totalBillAfterServiceAndTax = calculateServiceFeeAndSalesTax(totalBill);
    printResult(totalBillAfterServiceAndTax,totalBill);

    return 0;
}