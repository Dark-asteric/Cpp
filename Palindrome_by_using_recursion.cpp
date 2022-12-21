#include <iostream>
using namespace std;
bool ispalindrome(string s, int l, int r){
	if(l>=r) return true;
	
	if(s[l] != s[r]) return false;
	
	return ispalindrome(s, l+1, r-1);
}

int main(){
	string s;
	cin>>s;
	int l=0, r = s.size()-1;
	bool ss = ispalindrome(s,l,r);
	if(ss) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}