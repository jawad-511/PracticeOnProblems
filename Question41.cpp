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

float hoursToWeeks(float numOfHour)
{
    return numOfHour / 24 / 7;
}

float hoursToDays(float numOfHour)
{
    return (float) numOfHour / 24;
}

float daysToWeeks(float numOfDays)
{
    return (float) numOfDays / 7;
}
int main()
{
    float numberOfHours = readPositiveNumber("Please Enter number of hour");
    float numberOfDays = hoursToDays(numberOfHours);
    float numberOfWeeks = daysToWeeks(numberOfDays);

    cout << endl;
    cout << "Total Hours = " << numberOfHours << endl;
    cout << "Total Days = " << numberOfDays << endl;
    cout << "Total Weeks = " << hoursToWeeks(numberOfHours) << endl;


    return 0;
}