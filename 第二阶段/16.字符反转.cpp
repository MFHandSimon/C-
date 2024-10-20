//那我问你
/*
  你的头为什么尖尖的 .
					/\
			    ___/__\___
			   |         |
               |         |
			   |         |
			   ——————











*/
#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	for(int i=1;i<s.size();i+=2){
		if(s[i]=='W')   s[i]='M';
		if(s[i]=='M')   s[i]='W';
	}
	cout<<s;
	return 0;
}

