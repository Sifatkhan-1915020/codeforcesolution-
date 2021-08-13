#include <bits/stdc++.h>
 using namespace std;
 
 int main(){
 
int n,k,h,teams=0;

 //input taking
 
 cin>>n>>k;

 for(int i=0;i<n;i++)
  {
  	cin>>h;
  	 
  	  if(k<=5-h)
  	    teams++;
  }
 
  cout<<teams/3;
}