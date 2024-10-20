#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	int n[1000],num=0;
	for(int i=0;i<10;i++){
		cin>>n[i];
	}
	for(int i=0;i<10;i++){
		num+=n[i];
	}
	sort(n,n+10);
	cout<<double(1.0*num-n[0]-n[9])/8;
return 0;
}

