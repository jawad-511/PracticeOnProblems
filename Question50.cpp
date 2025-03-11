#include <iostream>
using namespace std;

enum enDaysOfTheWeek{sun = 1, mon = 2, tus = 3, wen = 4 
                 , thu = 5 , fri = 6 , sat= 7};


int readNumberInRange(string message , int from , int to)
{
    int n = 0;

    do
    {
     cout << "Enter number between " << from << " and " << to << endl;
     cin >> n;   
    }while(n < from || n > to);

    return n;
}

enDaysOfTheWeek readDayOfWeek()
{
    enDaysOfTheWeek dayOfWeek = (enDaysOfTheWeek) readNumberInRange("Please Enter a number", 1, 7);
    return dayOfWeek;
}

string getDayOfWeek(enDaysOfTheWeek DayOfWeek)
{
    switch (DayOfWeek)
    {
    case enDaysOfTheWeek::sun:
            return "Sunday";
    case enDaysOfTheWeek::mon:
            return "Monday";
    case enDaysOfTheWeek::tus:
            return "Tuesday";
    case enDaysOfTheWeek::wen:
            return "Wenesday";
    case enDaysOfTheWeek::thu:
            return "Thursday";
    case enDaysOfTheWeek::fri:
            return "Friday";
    case enDaysOfTheWeek::sat:
            return "Saturday";
    default:
    return "Invalid day";
    
    }
}


int main()
{

    cout << getDayOfWeek(readDayOfWeek()) << endl;
    return 0;
}