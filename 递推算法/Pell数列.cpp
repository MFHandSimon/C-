#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
main(){
	long long n,k;
	cin>>n;

	a[1]=1;
	a[2]=2;
	for(int i=3;i<=1000000;i++){
		a[i]=2*a[i-1]+a[i-2]%32767;
	}
	while(n--){
		cin>>k;
		cout<<a[k]<<endl;
	}


	return 0;
}

