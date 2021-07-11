#include <bits/stdc++.h>
using namespace std;

int jersyChecker(int n)
 {   
   
     int home[n],away[n]; //away and home jersy listing array
     
 	 int c=0;
 	 
 	 
 	for(int i=0;i<n;i++)
 	 {
 	 	cin>>home[i]>>away[i];  //taking input
 	 	
	  }
	  

	for(int j=0;j<n;j++)
	 {
	 	
	 	int s=count(away,away+n,home[j]);  //counting the matching to away to home jersy
	 	c=c+s;
	 	
		  
	 } 
	cout<<c<<endl;
 }
 
 int main()   
  {
  	int totalTeam;
  	cin>>totalTeam;
  	jersyChecker(totalTeam);  // fuction calling for counting 
  }