#include<iostream>
using namespace std;
void check(int x,int y);
main(){
  system("cls");
  int x,y;
  cout<<"Enter value of x:";
  cin>>x;
  cout<<"Enter value of y:";
  cin>>y;
  check(x,y);
}
void check(int x,int y)
{
  if(x==y)
   {
     cout<<x<<" is equal to "<<y;
   }
  if(x!=y)
   {
     cout<<x<<" is not equal to "<<y;
   }
}

