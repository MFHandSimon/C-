#include<bits/stdc++.h>
using namespace std;
main(){
    int n,cnt=0;
    cin>>n;
    cnt=n/3;
    if(n%3>0&&n<5){
    	cnt=-1;
	} else if(n%3==1&&n>4){
		cnt++;
	} else if(n%3==2&&n>4){
		cnt+=2;
	}
    cout<<cnt;

	return 0;
}

