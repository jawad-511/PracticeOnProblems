#include <iostream>
using namespace std;
struct Person
{
    string firstName;
    string lastName;
};

Person readPersonInformation()
{
    Person p;
    cout << "Please Enter your First Name\n";
    cin >> p.firstName;

    cout << "Please Enter your Last Name\n";
    cin >> p.lastName;

    return p;
}

string getFullName(Person person , bool reversd)
{
    string fullName = "";
    if(reversd)
    {
        fullName =  person.lastName +  " " + person.firstName + "\n";
    }
    else
    {
        fullName =  person.firstName +  " " + person.lastName + "\n";
    }  

    return fullName;
    
}

void printFullName(string FullName)
{
    cout << "Full Name " << FullName << endl;
}
int main()
{

printFullName(getFullName(readPersonInformation() , false));
    return 0;
}