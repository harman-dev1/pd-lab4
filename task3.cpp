#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
main(){
  system("cls");
  printMaze();
  int x=6,y=4;
  while(true){ 
  gotoxy(x-1,y);
  cout<<" ";
  if(x==17){
  x=3;
}
  gotoxy(x,y);
  cout<<"P";
  Sleep(1000);
  x=x+1;
}
}
void printMaze()
{
  cout<<"***********************"<<endl;
  cout<<"*                     *"<<endl;
  cout<<"*                     *"<<endl;
  cout<<"*                     *"<<endl;
  cout<<"*                     *"<<endl;
  cout<<"***********************"<<endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


    