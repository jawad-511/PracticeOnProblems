#include <iostream>
using namespace std;

enum enMonthsOfTheYear{jan = 1, feb = 2, mar = 3, apr = 4 
                 , may = 5 , jun = 6 , jul= 7 , aug = 8, sep = 9 
                 , oct = 10 , nov = 11 , dec = 12};


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

enMonthsOfTheYear readDayOfWeek()
{
    enMonthsOfTheYear dayOfWeek = (enMonthsOfTheYear) readNumberInRange("Please Enter a number", 1, 12);
    return dayOfWeek;
}

string getDayOfWeek(enMonthsOfTheYear DayOfWeek)
{
    switch (DayOfWeek)
    {
    case enMonthsOfTheYear::jan:
            return "January";
    case enMonthsOfTheYear::feb:
            return "Febreuary";
    case enMonthsOfTheYear::mar:
            return "Marrch";
    case enMonthsOfTheYear::apr:
            return "April";
    case enMonthsOfTheYear::may:
            return "May";
    case enMonthsOfTheYear::jun:
            return "June";
    case enMonthsOfTheYear::jul:
            return "Julay";
    case enMonthsOfTheYear::aug:
            return "Augst";
    case enMonthsOfTheYear::sep:
            return "Sepetmeber";
    case enMonthsOfTheYear::oct:
            return "October";
            case enMonthsOfTheYear::nov:
            return "November";
    case enMonthsOfTheYear::dec:
            return "December";
    default:
    return "Invalid day";
    
    }
}


int main()
{

    cout << getDayOfWeek(readDayOfWeek()) << endl;
    return 0;
}