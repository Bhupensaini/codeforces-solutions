#include <iostream>
using namespace std;
 
int main()
{
	int k,n,w;
	int price = 0, loan;
	cin >> k >> n >> w;
 
	for (int i = 1; i <= w; ++i)
	{
		price = price + i*k;
	}
 
	loan = price - n;
 
	if (loan>0)
	{
		cout<<loan;
	}
	else {
		cout<<0;
	}
 
	return 0;
}