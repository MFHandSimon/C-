#include<bits/stdc++.h>
using namespace std;
main(){
	int f[110],n;
	cin>>n;
	f[0]=1;
	f[1]=3;
	for(int i=2;i<=n;i++){
		f[i]=2* f[i-1]+f[i-2];
	}
	cout<<f[n]<<endl;
	return 0;

}





/*

	input     output
	1           3
	2           7
	3           15














*/














