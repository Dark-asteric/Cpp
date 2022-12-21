#include <iostream>
using namespace std;

void printBinary(int num){
	for(int i=20; i>=0; i--)
		cout<<( ( num>>i ) & 1);
	cout<<'\n';
}

int main(){
	ios :: sync_with_stdio(false);
	cin.tie(0);
	int n = 9 ,i = 3;
	printBinary(n);
	
	// check -> Set bit or Unset bit :
	
	if(( n & (1<<i)) != 0) cout<<"\nSet BIT\n";
	else cout<<"\nNot set\n";
	
	// Make i-th bit set :
	cout<<"\nMake "<<i<<"-th bit set :\t";
	printBinary( n | (1<<i));
	
	// Make i-th bit unset :
	cout<<"\nMake "<<i<<"-th bit unset :\n";
	cout<<"\nFirst step : \t";
	printBinary( ~n );
	cout<<"\nSecond step : \t";
	printBinary( ~(1<<3));
	cout<<"\nFinal step : \t";
	printBinary(n & (~(1<<3)));
	
	// Toggle bit :
	cout<<"\nToggle 4-th bit :\t";
	printBinary( n ^ (1<<4));
	cout<<endl;
	// Count set bits :
	
	int cnt = 0;
	for(int i=20 ; i>=0; i--){
		if(( n & (1<<i)) != 0) cnt++;
	}
	cout<<cnt<<endl;
	// We can use builtin function to count set bits.
	// cout<<__builtin_popcount(n);
	// cout<<__builtin_popcountll(1LL<<35);
	return 0;
}