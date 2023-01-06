#include<iostream>
#include<windows.h>
void gotoxy(int x,int y);
void printMaze();
using namespace std;
main(){
   system("cls");
   printMaze();
   int x=3,y=4;
   while(true){   
   gotoxy(x,y);
   cout<<" ";
   x=x+1;
   if(x==20){ 
   x=3;
}  
   
   cout<<"P";
   Sleep(200);
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