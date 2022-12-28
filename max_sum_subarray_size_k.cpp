// Maximum sum subarray of size K :
#include <iostream>
using namespace std;

int sliding_window(int arr[], int n, int k){
	int start = 0, end = 0, sum = 0, mx = INT_MAX;
	for(int i=0; i<k; i++) sum += arr[i];
	mx = min(mx,sum);
	for(int j=k; j<n; j++){
		sum += arr[j];
		sum -= arr[j-k];
		mx = min(mx,sum);
	}
	return mx;
	// 0 1 2 3 4
}

int main(){
	int n; cin>>n;
	int arr[n+1];
	for(int i=0; i<n; i++) cin>>arr[i];
	int k; cin>>k;
	cout<<sliding_window(arr,n,k);
	return 0;
}
