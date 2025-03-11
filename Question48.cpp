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

   do
   {
    pinCode = readPinCode();
    if(pinCode == "1234")
    {
     return true;
    }
    else
    {
        cout << "\nWrong PIN\n";
        system("color 4F");
    }
   }while(pinCode != "1234");

   return false;//Means login faild
}
int main()
{
    if(login())
    {
        system("color 2F");//TURN SCREEN TO GREEN INDICATOR TO SUCCESSFFUL LOGIN
        cout << "\nYour Balance is" << 7500 << endl;
    }
    return 0;
}