#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main(){
  system("cls");
  cout<<"Text";
  gotoxy(8,12);
  cout<<"I am Harmain";
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}