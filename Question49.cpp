#include <iostream>
using namespace std;

string readPinCode()
{
    string pinCode = "";
    cout << "Please Enter PIN Code\n";
    cin >> pinCode;

    return pinCode;
}

bool login()
{
   string pinCode = "";
   int counter = 3;

   do
   {
    pinCode = readPinCode();
    if(pinCode == "1234")
    {
     return true;
    }
    else
    {
        cout << "\nWrong PIN, you have " << counter << " tries\n";
        system("color 4F");
    }
    counter--;
   }while(pinCode != "1234" && counter <= 3);

   return false;//Means login faild
}
int main()
{
    if(login())
    {
        system("color 2F");//TURN SCREEN TO GREEN INDICATOR TO SUCCESSFFUL LOGIN
        cout << "\nYour Balance is " << 7500 << endl;
    }
    else
        cout <<"Your card blocked call the bank for help\n";
    return 0;
}