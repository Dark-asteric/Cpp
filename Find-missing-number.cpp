// Find missing number by using xor operation

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long int

int main() {
	ios :: sync_with_stdio(false);
    cin.tie(0);
    
    int arr[] = {1 , 3 , 4, 5};
    int x1 = 0,x2 = 0;
    for(auto it:arr){
        x1 ^= it;
    }
    for(int i=1;i<=5;i++){
        x2 ^= i;
    }
    cout<<(x1^x2)<<endl;

    return 0;
}
