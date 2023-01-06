#include<iostream>
using namespace std;
void sleep(int total);
main()
{
  system("cls");
  int holidays;
  cout<<"Enter holidays in number:";
  cin>>holidays;
  int holidayTime;
  holidayTime=holidays*127;
  int workingDays=365-holidays;
  int WorkingDaysTime=workingDays*63;
  int total;
  total=WorkingDaysTime+holidayTime;
 
  cout<<"total:"<<total<<endl;
  sleep(total);
}
void sleep(int total)
{
   int diff;
   if(total>30000)
   {
     diff=total-30000;
     cout<<diff<<endl;
     int hour,minutes;
     hour=diff/60;
     minutes=diff%60;
     cout<<"Tom will run away"<<endl;
     cout<<"Hours are "<<hour<<endl;
     cout<<"Minutes are "<<minutes;
     
   }
  if(total<30000)
    {
     diff =30000-total;
     cout<<diff<<endl;
     int hour,minutes;
     hour=diff/60;
     minutes=diff%60;
     cout<<"Tom sleeps well"<<endl;
     cout<<"Hours are "<<hour<<endl;
     cout<<"Minutes are "<<minutes<<endl;
    }
}
  