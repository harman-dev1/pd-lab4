#include<iostream>
using namespace std;
void check(string input);
main()
{
  system("cls");
  string input;
  cout<<"Enter true or false:";
  cin>>input;
  check(input);
}
void check(string input)
{
  if(input=="true")
   {
     cout<<"False";
   }
  if(input=="false")
   {
     cout<<"True";
   }
}
  