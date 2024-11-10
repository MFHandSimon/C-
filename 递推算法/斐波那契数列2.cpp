#include<bits/stdc++.h>
using namespace std;
int n,f[1000000],a;
main(){

    cin>>n;
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=1000000;i++){
    	f[i]=(f[i-1]+f[i-2])%1000;
	}

	for(int i=1;i<=n;i++){
		cin>>a;
		cout<<f[a];
	}

	return 0;
}

