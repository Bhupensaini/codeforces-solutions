#include <iostream>
using namespace std;
 
int main() {
	int n,k;
	cin>>n>>k;
	int val = 0;
	int arr[n];
	int x=0;
	for (int i=0; i < n; i++) {
		cin>>arr[i];
        // a++;
	}
 
	for (int i=0; i < n; i++) {
		if ( arr[i] >= arr[k-1] and arr[i] != 0 ){
			val++;
		} 
        // x++;
	}
    // cout<<arr[0];
    // cout<<arr[1];
	cout<<val;
	return 0;
}