#include <iostream>
using namespace std;
struct Driver
{
    int age;
    bool hasDriverLicense;
    bool hasRecommendation;
};

Driver readDriverInformation()
{
    Driver driver;
    cout << "Please Enter Your age\n";
    cin >> driver.age;

    cout << "Please Enter 1 if you have License and 0 if you not\n";
    cin >> driver.hasDriverLicense;

    cout << "Please Enter 1 if you have Recommendation and 0 if you not\n";
    cin >> driver.hasRecommendation;

    return driver;
}

bool isAccepted(Driver driver)
{
   return (driver.hasDriverLicense && driver.age > 21 || driver.hasRecommendation);
}

void printResult(Driver d)
{
    bool result = isAccepted(d);
    if(result)
    {
        cout << "Hired\n";
    }
    else 
        cout << "Rejected\n";
}
int main()
{
    printResult(readDriverInformation());
    return 0;
}