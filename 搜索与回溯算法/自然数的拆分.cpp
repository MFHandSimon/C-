#include<bits/stdc++.h>
using namespace std;
int n,a[10005]={1};
void print(int t){
	cout<<n<<"=";
	for(int i=1;i<=t-1;i++){
		cout<<a[i]<<"+";
	}
	cout<<a[t];
	cout<<endl;
}
int search(int k,int t){
	for(int i=a[t-1];i<=k;i++){
		if(i<n){
			a[t]=i;
			k-=i;
			if(k==0){
				print(t);
			} else {
				search(k,t+1);
			}
			k+=1;
		}
	}
	return 0;
}


main(){
cin>>n;
search(n,1);

	return 0;
}

