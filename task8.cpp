#include<iostream>
using namespace std;
void discount(string country,float ticket);
main()
{
  system("cls");
  string country;
  float ticket;
   while(1){
  cout<<"Enter Country name:";
  cin>>country;
  cout<<"Enter ticket price in dollars:";
  cin>>ticket;
  discount(country,ticket);
}
}
void discount(string country,float ticket)
{ 
  float discount;
  
  if(country=="Pakistan")
   { 
     discount=ticket-((ticket/100)*5);
     cout<<"After discount price is   ";
     cout<<discount<<endl;
   }
  if(country=="Ireland")
   {
      discount=ticket-((ticket/100)*10);
      cout<<"After discount price is   "<<discount<<endl;
   }
  if(country=="India")
   {
      discount=ticket-((ticket/100)*20);
      cout<<"After discount price is   "<<discount<<endl;
   }
  if(country=="England")
   {
      discount=ticket-((ticket/100)*30);
      cout<<"After discount price is   "<<discount<<endl;
   }
  if(country=="Canada")
   {
      discount=ticket-((ticket/100)*45);
      cout<<"After discount price is   "<<discount<<endl;
   }     
}
