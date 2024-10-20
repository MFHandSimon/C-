#include<iostream>
using namespace std;
int main(){
	int n,d=1;
	cin>>n;
	while(n>3){
		d++;
		n-=2;
	}
	cout<<d;
return 0;
}

