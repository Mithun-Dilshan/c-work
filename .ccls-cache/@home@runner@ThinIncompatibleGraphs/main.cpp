#include<iostream>
using namespace std;

class rectangle{
	private:
		int length;
		int width;
	public:
	void getlenth(int len);
	void getwidth(int wid);
	int area ();	
};
void rectangle::getlenth(int len){
	length=len;
	
} 
void rectangle::getwidth(int wid){
	width=wid;
}
int rectangle::area(){
	return length*width;
}
int main(){
	int len,wid;
	
	cout<<"Enter the length of rectangle ";
	cin>>len;
	cout<<"Enter the width of rectangle ";
	cin>>wid;
	
	
	rectangle rec1;
	
	rec1.getlenth( len);
	rec1.getwidth(wid);
	
	cout<<"area of a rectangle "<<rec1.area()<<endl;
	
	
	
	
return 0;	
}