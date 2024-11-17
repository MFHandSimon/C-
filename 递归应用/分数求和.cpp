#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if (a % b == 0) {
		return b;
	}
	return gcd(b,a % b);
}

main(){
	int n,q,p;
	char c;
	cin>>n>>p>>c>>q;
	int ansp=p;
	int ansq=q;
	for(int i=1;i<=1;i++){
		cin>>p>>c>>q;
		ansp=p*ansq+q*ansp;
		ansq=q*ansq;
		int temp=gcd(ansp,ansq);
		ansp/=temp;
		ansq/=temp;
	}
	if(ansq==1){
		cout<<ansp;
	}else{
		cout<<ansp<<"/"<<ansq;
	}
	return 0;
}

