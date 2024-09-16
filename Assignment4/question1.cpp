/* Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create an array dynamically of Time * of size 5.
Accept the values and display. */



#include<iostream>
using namespace std;

class Time
{
int hours;
int minutes;
int seconds;
public:
Time():hours(0), minutes(0), seconds(0) 
        
{
   
    cout<<"parameterless constructor"<<endl;
}
Time(int h,int m,int s):hours(h), minutes(m), seconds(s)
{

    cout<<hours<<minutes<<seconds<<endl;

}

 void setHour(int h)//mutators
 {
    hours=h;
}

int getHour() const//inspector
{
    return hours;
    
}
void setMinute(int m)

{
    minutes=m;
}
int getMinute() const//inspector
{
    return minutes;
}

void setSeconds(int s)
{
    seconds=s;
}
int getSeconds() const
{
    return seconds;
}
void printTime() const
{
    cout<<hours <<":"<<minutes<<":"<<seconds;
}





};

int main() 
{
    
    Time* timeArray = new Time[5];

    
    for (int i = 0; i < 5; ++i) {
        int h, m, s;
        cout << "Enter time for object " << i + 1 << " (hours minutes seconds): ";
        cin >> h >> m >> s;
        timeArray[i].setHour(h);
        timeArray[i].setMinute(m);
        timeArray[i].setSeconds(s);

    
    cout << "\nTimes entered:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Object " << i + 1 << ": ";
        timeArray[i].printTime();
    }

    
    delete[] timeArray;
    }
    return 0;
}




