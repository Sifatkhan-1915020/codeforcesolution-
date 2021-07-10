#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int year;
	cin>>year; //taking the input year
	
	while(year!=9013)
	 {
	 	year++;
	 	
	 	int d1=year%10; //unit point 
	 	int d2=(year%100)/10 ;//decimal point 
	 	int d3=(year%1000)/100;//hund point
	 	int d4=year/1000;
	 	
	 	 if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4)
	 	  {
	 	  	cout<<year<<endl;
	 	  	break;
		   }
	 }
	 
	 return 0;
}