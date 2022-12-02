// Time complexity : O(n)
#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n == 0)
        return a;
    for(i = 2; i <= n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
 
// Driver code
int main()
{
    int n = 9;
     
    cout << fib(n);
    return 0;
}

// Method 2:
//________________________________________________

// Time complexity : O(logn)

// C++ Program to find n'th fibonacci Number in
// with O(Log n) arithmetic operations
#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1000;
 
// Create an array for memoization
int f[MAX] = {0};
 
// Returns n'th fibonacci number using table f[]
int fib(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    // If fib(n) is already computed
    if (f[n])
        return f[n];
 
    int k = (n & 1)? (n+1)/2 : n/2;
 
    // Applying above formula [Note value n&1 is 1
    // if n is odd, else 0.
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n];
}

/* Driver program to test above function */
int main()
{
    int n = 9;
    printf("%d ", fib(n));
    return 0;
}
