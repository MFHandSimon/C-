#include<bits/stdc++.h>
using namespace std;
int N,a[10005],vis[10005],total=0;

bool prime(int x,int y){
	int i=x+y;
	for(int j=2;j*j<=i;j++){
		if(i%j==0){
			return 0;
		}
	}
	return 1;
}

void print(){
	total++;
	for(int i=1;i<=N;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void search(int k){
	if(k==1){
		a[1]=1;
		vis[1]=1;
		search(2);
		return;
	}
	for(int i=2; i<=N; i++){
		if(prime(a[k-1],i)&&vis[i]==0){
			a[k]=i;
			vis[i]=1;
			if(k==N){
				if(prime(a[N],a[1])){
					print();
				}
			} else {
				search(k+1);
			}
			vis[i]=0;
		}
	}
}


main(){
	cin>>N;
	if(N<1||N>20){
		cout<<"No Solution";
	}
	search(1);
	if(total==0){
		cout<<"No Solution";
	}
	return 0;
}

