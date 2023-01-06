#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void name();
main()
{
  system("cls"); 
  
  name();
}
void name()
{ 
  gotoxy(18,6);
  cout<<"h      h       a      r r r r     m         m       a      iiiiii  n       n"<<endl;
  gotoxy(18,7);
  cout<<"h      h     a   a    r     r     m m     m m    a     a     ii    n n     n"<<endl;
  gotoxy(18,8);
  cout<<"h      h    a     a   r    r      m  m   m  m   a       a    ii    n  n    n"<<endl;
  gotoxy(18,9);
  cout<<"hhhhhhhh   aaaaaaaaa  r  r        m    m    m   aaaaaaaaa    ii    n   n   n"<<endl;
  gotoxy(18,10);
  cout<<"h      h   a       a  r r         m         m   a       a    ii    n    n  n"<<endl;
  gotoxy(18,11);
  cout<<"h      h   a       a  r  r        m         m   a       a    ii    n     n n"<<endl;
  gotoxy(18,12);
  cout<<"h      h   a       a  r   r       m         m   a       a  iiiiii  n       n"<<endl;
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}