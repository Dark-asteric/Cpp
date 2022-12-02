#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int fwd[N+10], bckwd[N+10];
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n+10];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    for(int i=1; i<=n; i++)
        fwd[i] = __gcd(fwd[i-1], arr[i]);
    for(int i=n; i>=1; i--)
        bckwd[i] = __gcd(bckwd[i+1], arr[i]);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<__gcd(fwd[l-1],bckwd[r+1])<<"\n";
    }

    return 0;
}
