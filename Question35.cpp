#include <iostream>
using namespace std;

struct stPiggyBankContent
{
    int penny;
    int nickle;
    int dimes;
    int quarter;
    int dollar;
};

stPiggyBankContent readPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout <<"Please Enter a total Pennies\n";
    cin >> PiggyBankContent.penny;

    cout <<"Please Enter a total Nickles\n";
    cin >> PiggyBankContent.nickle;
    
    cout <<"Please Enter a total Dimes\n";
    cin >> PiggyBankContent.dimes;

    cout <<"Please Enter a total Quarters\n";
    cin >> PiggyBankContent.quarter;

    cout <<"Please Enter a total Dollars\n";
    cin >> PiggyBankContent.dollar;

    return PiggyBankContent;
}

int calculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
   int totalPennies = PiggyBankContent.penny * 1 + PiggyBankContent.nickle * 5  + PiggyBankContent.dimes * 10
    + PiggyBankContent.quarter * 25 + PiggyBankContent.dollar * 100;

    return totalPennies;
    
}

int main()
{
    int totalPennies = calculateTotalPennies(readPiggyBankContent());
    cout << "Total Pennies = " << totalPennies << endl;
    cout << "Total Dollars = " << (float) totalPennies / 100 << endl;
    return 0;
}
