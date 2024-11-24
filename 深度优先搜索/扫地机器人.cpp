#include<bits/stdc++.h>
using namespace std;
int num[105][105],n,m;
void dfs(int x,int y,int k){
	num[x][y]=k;
	if(y+1<=m&&num[x][y+1]==0){
		dfs(x,y+1,k+1);
	}
	if(x+1<=n&&num[x+1][y]==0){
		dfs(x+1,y,k+1);
	}
	if(y-1>=1&&num[x][y-1]==0){
		dfs(x,y-1,k+1);
	}
	if(x-1>=1&&num[x-1][y]==0){
		dfs(x-1,y,k+1);
	}


}

main(){
	cin>>n>>m;
	dfs(1,1,1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
