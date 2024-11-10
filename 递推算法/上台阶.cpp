#include<bits/stdc++.h>
using namespace std;
long long int a[114514];
main(){
    int n;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	for(int i=4;i<=71;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	while(n!=0&&cin>>n){
		cout<<a[n]<<"\n";
	}
	
	return 0;
}

