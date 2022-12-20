#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m; cin>>n;
	m=n;
	vector<int> v;
	while(n>0){
		int rem = n%2;
		v.push_back(rem);
		n /= 2;
	}
	int sz=v.size();
	cout<<"\nDecimal to Binary :\t";
	for(int i=sz-1;i>-1; i--)cout<<v[i];
	cout<<endl;
	//Simple way to convert Decimal to Binary : 
	cout<<"\nDecimal to Binary :\t";
	for(int i=10; i>=0; i--)
		cout<< ((m>>i) & 1);
	cout<<endl;
}
