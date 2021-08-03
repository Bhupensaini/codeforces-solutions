#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
 
  if (n==2){
    cout<<"no \n";
  }
 
	else if (n%2 == 0){
		cout<<"yes \n";
	}
	else if (n%2 != 0){
		cout<<"no \n";
	}
  
 
	return 0;
}