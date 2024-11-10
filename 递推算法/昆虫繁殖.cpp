#include<bits/stdc++.h>
using namespace std;
long long int x,y,z,a[101]={0},b[101]={0};
main(){
	cin>>x>>y>>z;
	for(int i=1;i<=x;i++){
		a[i]=1;
		b[i]=0;
	}
	
	for(int i=x+1;i<=z;i++){
		b[i]=y*a[i-x];
		a[i]=a[i-1]+b[i-2];
	}
	cout<<a[z+1]<<endl;
	return 0;
}

