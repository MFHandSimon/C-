#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	char a[201][201];
	int ls=s.size();
	int n,m,k;
	for(n=sqrt(ls);n>=1;n--){
		m=ls/n;
		if(n*m==ls){
			break;
		}
	}
	k=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=s[k];
			k++;
		}
	}
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			cout<<a[i][j];
		}
	}



	return 0;
}
