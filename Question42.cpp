//Write a program that takes days , hours , minutes , seconds as a input and produce the seconds taken to finish the task based on the inputs
#include <iostream>
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

stTaskDuration readTaskDuration()
{
    stTaskDuration taskDuration;
    taskDuration.days = readPositiveNumber("Please Enter number of days");
    taskDuration.hours = readPositiveNumber("Please Enter number of hours");
    taskDuration.minutes = readPositiveNumber("Please Enter number of minutes");
    taskDuration.seconds = readPositiveNumber("Please Enter number of seconds");

    return taskDuration;
}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
    int durationSeconds = 0;
    durationSeconds += TaskDuration.days * 24 * 60 * 60;
    durationSeconds += TaskDuration.hours * 60 * 60;
    durationSeconds += TaskDuration.minutes * 60;
    durationSeconds += TaskDuration.seconds;

    return durationSeconds;

}
int main()
{
    int finalResult = TaskDurationInSeconds(readTaskDuration());
    cout << "Task Duration In Seconds: " << finalResult << endl;
    return 0;
}