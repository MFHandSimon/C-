#include<bits/stdc++.h>
using namespace std;

void f(int n){
	if(n==0){
		return;
	}else{
		f(n/10);
		cout<<n%10;
		return;
	}
}

main(){
	int i=1234;
	f(i);
	return 0;
}

