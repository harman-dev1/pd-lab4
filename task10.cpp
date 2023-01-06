#include<iostream>
using namespace std;
void price(float red,float white,float tulips,float total);
main()
{
  system("cls");
  float red,white,tulips;
  cout<<"Enter amount of red roses:";
  cin>>red;
  cout<<"Enter amount of white roses:";
  cin>>white;
  cout<<"Enter amount of tulips roses:";
  cin>>tulips;
  float total=(red*2.0)+(white*4.10)+(tulips*2.50);
  price(red,white,tulips,total);
}
void price(float red,float white,float tulips,float total)
{  
    float discount;
  if(total>200)
    {
      cout<<"original price:"<<total<<endl;
      discount=total-(total/100)*20;
      cout<<"Price after discount:"<<discount<<endl;
    }
  if(total<200)
    {
      cout<<"Original price is :"<<total;
    }
}