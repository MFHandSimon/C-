#include<bits/stdc++.h>
using namespace std;



string a,s;
int vis[155];

bool cheek(int res,char c) {
	for(int i=res; i<s.size(); i++) {
		if(s[i]==c) {
			return 1;
		}
	}
	return 0;
}

bool judge(int res) {
	for(int i=0; i<26; i++) {
		if(i!=res) {
			if(vis[i]!=-1) {
				if(!cheek(vis[res],i+'a')) {
					return 0;
				}
			}
		}
	}
	return 1;
}

main() {
	cin>>s;
	while(s.size()) {
		a ="";
		memset(vis,-1,sizeof vis);
		for(int i=s.size()-1; i>=0; i--) {
			vis[s[i]-'a']=i+1;
		}
		for(int i=0; i<26; i++) {
			if(vis[i]!=-1) {
				if(judge(i)) {
					cout<<char(i+'a');
					for(int j=vis[i]; j<s.size(); j++) {
						if(s[j]!=char(i+'a')) {
							a+=s[j];
						}
					}
					s=a;
					break;
				}
			}
		}
	}
	return 0;
}

