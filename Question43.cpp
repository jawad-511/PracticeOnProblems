//Write a program that takes days , hours , minutes , seconds as a input and produce the seconds taken to finish the task based on the inputs
#include <iostream>
#include <cmath>
using namespace std;
struct stTaskDuration
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

//Read positive number will used in read task duration to read several inputs such as days minuts etc..
int readPositiveNumber(string message)
{
    int n = 0;
    do
    {
        cout << message << endl;
        cin >> n;
    }while(n < 0);   

    return n;
  
}

stTaskDuration secondsToTaskDuration(int totalSeconds)
{
    stTaskDuration taskDuration;
    const int secondsPerDay = 24 * 60 * 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerminute = 60;

    int remainder = 0;
    taskDuration.days = floor(totalSeconds / secondsPerDay);
    remainder = totalSeconds % secondsPerDay;
    taskDuration.hours = floor(remainder / secondsPerHour);
    remainder = remainder % secondsPerHour;
    taskDuration.minutes = floor(remainder / secondsPerminute);
    remainder = remainder % secondsPerminute;
    taskDuration.seconds = remainder;
    

    return taskDuration;
}

void printTaskDurationDetails(stTaskDuration TaskDuration)
{
    cout << TaskDuration.days << ":" << TaskDuration.hours << ":" << TaskDuration.minutes << ":" << TaskDuration.seconds << endl; 
}

int main()
{
   int totalSeconds = readPositiveNumber("Please Enter total secondsn");
   printTaskDurationDetails(secondsToTaskDuration(totalSeconds));
    return 0;
}