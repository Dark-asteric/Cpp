#include <iostream>
#include "math.h"
using namespace std;
int main() {
    // Write C++ code here
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*log(b) > c*log(d)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
