#include <iostream>
#include <dos.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

#define screen_width 90
#define screen_height 26
#define window_width 80

using namespace std;

HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
COORD  CursorPosition;

//enemy drawing

 int enemyY[3];
 int enemyX[3];
 int enemyFlag[3];
 
//pre car drawing

 int car[4][4]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
 
 //car position initial
 
 int carPos=window_width/2;
 int score =0;

//movement function

int gotoxy(int x,int y)  
 {
 	 CursorPosition.X=x;
 	 CursorPosition.Y=y;
 	
 	 SetConsoleCursorPosition(console,CursorPosition); //cursor position maintaing in console
 	
}               


//cursor sizing 


int setcursor(bool visible,DWORD size)
{
	if(size==0)
	 size=20;
	 
	 CONSOLE_CURSOR_INFO lpCursor;
	 lpCursor.bVisible=visible;
	 lpCursor.dwSize=size;
	 SetConsoleCursorInfo(console,&lpCursor);
}


//drawborder of the road

int drawBorder()
 {
 	for(int i=0;i<screen_height;i++)
 	 {
 	 	for(int j=0;j<17;j++)
 	 	 {
 	 	 	gotoxy(0+j,i);
 	 	 	cout<<"+";
 	 	 	gotoxy(window_width-j,i);
 	 	 	cout<<"+";
 	 	 	
		   }
	  }
 }
 
 
//generate enemy

int genEnemy(int ind)
 {
 	enemyX[ind]=17+rand()%(33);
 }


//drawing enemy 

int drawEnemy(int ind)
 {
 	if(enemyFlag[ind]==true) 
 	  {
 	  	gotoxy(enemyX[ind],enemyY[ind]);
 	  	cout<<"***";
 	  	gotoxy(enemyX[ind],enemyY[ind]+1);
 	  	cout<<"**";
 	  	gotoxy(enemyX[ind],enemyY[ind]+2);
 	  	cout<<"***";
 	  	gotoxy(enemyX[ind],enemyY[ind]+3);
 	  	cout<<"**";
	   }
 }

//erase enemy

int eraseEnemy(int ind)
 {
 	if(enemyFlag[ind]==true) 
 	  {
 	  	gotoxy(enemyX[ind],enemyY[ind]);
 	  	cout<<"   ";
 	  	gotoxy(enemyX[ind],enemyY[ind]+1);
 	  	cout<<"   ";
 	  	gotoxy(enemyX[ind],enemyY[ind]+2);
 	  	cout<<"   ";
 	  	gotoxy(enemyX[ind],enemyY[ind]+3);
 	  	cout<<"   ";
	   }
 }

//reset enemy

 int resetEnemy(int ind)
  {
  	eraseEnemy(ind);
  	enemyY[ind]=1;
  	genEnemy(ind);//aazaZq	aQ	AQ	1AR5OL9I8U7Y6T5R4E3W2Q1	`[-P0O9I8U7Y654321POIU7Y6T5R4E3W2Q1	876T5R4321`U7Y6T5R4E3W2Q1	]
   } 

//car drawing 

int drawCar()
{
	for(int i=0;i<4;i++)
	 {
	 	for(int j=0;j<4;j++)
	 	  {
	 	  	gotoxy(j+carPos,i+22);
	 	  	cout<<"*";
		   }
	 }
}

//erasing the car

int eraseCar()
{
	for(int i=0;i<4;i++)
	 {
	 	for(int j=0;j<4;j++)
	 	 {
	 	 	gotoxy(j+carPos,i+22);
	 	 	cout<<" ";
		  }
	 }
 } 
 
 

int main()
 {
 	cout<<"Hello pep";
 	drawBorder();
 	drawCar();

 }