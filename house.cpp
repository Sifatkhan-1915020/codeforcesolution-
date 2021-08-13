#include <iostream>

using namespace std;

class house{

private: 
	
	int len,bre,human;

public:
	
	int setData(int x,int y,int z)
	 {
	 	len=x;
	 	bre=y;
	 	human=z;
	 }
	
	int area()
	 {
	 	cout<<"The Area is "<<len*bre<<endl;
	 }
	
	int density()
	 {
	 	cout<<"Population density is H/A "<<(len*bre)/human;
	 }
};

int main()
 {
    house h1,h2;
 	h1.setData(500,600,5);
 	h1.area();
 	h1.density();
 	
 	h2.setData(500,600,10)
 }