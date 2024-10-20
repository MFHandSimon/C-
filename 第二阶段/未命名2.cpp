#include<bits/stdc++.h>
#define itn int
#define mian main
using namespace std;
mian(){
	itn n,m,number=0;
	cin>>n>>m;
	for(n;n<=m;n++){
		if((n%10+(n/10%10)+n/100)==8) number++;
	}
	cout<<number;
	return 0;
}

