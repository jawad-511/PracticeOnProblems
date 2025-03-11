#include <iostream>
using namespace std;

int readAge(){

    int age;
    cout << "Enter your age\n";
    cin >> age;
 
    return age;
}

int readUntilAgeBetween(int from , int to)
{
    int age = 0;
    do{
        age = readAge();
       }while(age < from || age > to);

       return age;
}
bool validateAge(int from , int to , int age)
{
    if(age >= from && age <= to)
    {
        return true;
    }
    else
        return false;
}

void printResult(int age)
{
    if(validateAge(18, 45, age))
        cout << age <<" is a Valid age"<< endl;
        else
            cout << age << " is a invalid age" << endl;
}

int main()
{

    printResult(readUntilAgeBetween(18 , 45));

    return 0;
}