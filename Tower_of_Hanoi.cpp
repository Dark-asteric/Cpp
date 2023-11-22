#include "bits/stdc++.h"
using namespace std;

void tower_of_hanoi(int n,string source, string aux, string destination){
    if(n>0){
        tower_of_hanoi(n-1,source,destination,aux);
        cout<<"Move "<<n<<" from : "<<source<<" to : "<<destination<<endl;
        tower_of_hanoi(n-1,aux,source,destination);
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    tower_of_hanoi(n,"A","B","C");
    return 0;
}