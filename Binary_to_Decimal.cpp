#include <iostream>
#include <math.h>
using namespace std;
int main(){
	//cout<<(1<<6);
	string st;
	cin>>st;
	long long int sum = 0;
	reverse(st.begin(),st.end());
	for(int i=0; i<st.size(); i++){
		if(st[i] == '1')
			sum += (1<<i);
	}
	cout<<sum<<endl;
	return 0;
}