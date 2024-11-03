#include<iostream>
#include<queue>
using namespace std;
int n,ans;
priority_queue< int,vector<int>,greater<int> >q;
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(q.size()<3){
			q.push(x);
		} else {
			int t= q.top();
			t+=x;
			q.pop();
			q.push(t);
		}
	}
	cout<<q.top();
	return 0;
}
