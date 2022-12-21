#include <iostream>
using namespace std;

bool ispowerof2(int n){
	return (n && !(n & (n-1)));
}
int main(){
	ios::sync_with_stdio(true);
	cin.tie(0);
	int n; cin>>n;
	if(ispowerof2(n)) cout<<"True\n";
	else cout<<"False\n";
	return 0;
}