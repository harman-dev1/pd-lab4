#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
main(){
  system("cls");
  int x=8,y=3;
  printMaze();
  
  while(1) {
  gotoxy(x,y+1);
  cout<<" ";
  if(y==0)
 {
  y=3;
 }
  gotoxy(x,y);
  cout<<"p";
  Sleep(1000);
  y=y-1;
}  
}
void printMaze(){
  cout<<"*****************"<<endl;
  cout<<"*               *"<<endl;
  cout<<"*               *"<<endl;
  cout<<"*               *"<<endl;
  cout<<"*               *"<<endl;
  cout<<"*               *"<<endl;
  cout<<"*               *"<<endl;
  cout<<"*****************"<<endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}