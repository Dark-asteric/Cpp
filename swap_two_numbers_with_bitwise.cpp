#include <iostream>
using namespace std;

int main(){
	int a = 5 , b = 7;
	cout<<"Before swap :\ta = "<<a<<" and b = "<<b<<endl;
	a ^= b;
	b ^= a;
	a ^= b;
	cout<<"After swap :\ta = "<<a<<" and b = "<<b;
	return 0;
}