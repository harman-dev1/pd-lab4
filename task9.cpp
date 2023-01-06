#include<iostream>
using namespace std;
void challan(float speed);
main()
{
  float speed;
  cout<<"Enter the speed:";
  cin>>speed;
  challan(speed);
}
void challan(float speed)
{
  if(speed>100)
   {
     cout<<"speed:"<<speed   ;
     cout<<"   Halt YOU WILL BE CHALLENGED!!!";
   }
   if(speed<100)
   {
     cout<<"speed:"<<speed;
     cout<<"   Perfect! You are going good.";
    }
} 