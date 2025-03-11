#include <iostream>
using namespace std;

int readTotalSales()
{
    int totalSales = 0;
    cout << "Enter the totalSales" << endl;
    cin >> totalSales;

    return totalSales;
}
float getComissionPercantage(float totalSales)
{
    
    if(totalSales >= 1000000)
    {
        return  0.01;   
    }
    else if(totalSales >= 500000)
    {
          return 0.02;
    }
    else if(totalSales >= 100000)
    {
          return 0.03;
    }
    else if(totalSales >= 50000)
    {
          return 0.05;
    }
    else    
        return 0.00;
}
int claculateToalCommession(float totalSales)
{
    return getComissionPercantage(totalSales) * totalSales;
}

int main()
{

    cout << claculateToalCommession(readTotalSales());
    return 0;
}
