#include <bits/stdc++.h>
using namespace std;
 
int main() {
	double n,m,a;
	cin>>n>>m>>a;
	long long int i = ceil(n/a);
	long long int j = ceil(m/a);
	cout<<(i*j);
 
 
	return 0;
}