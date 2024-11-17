//那我问你
#include<bits/stdc++.h>
using namespace std;
int num[1007];

int f(int n)
{
	if(num[n]!=0)  return num[n];   //返回数据
	num[n]=1;       //数据本身也算一个
	//计算个数
	for(int i=1;i<=n/2;i++) //n/2不能超过原数的一半
	{
		num[n]+=f(i);
	}
	return num[n];
	cout<<num[n];
}
//输出最终结果
main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}

/*
IN
6

OUT
6


*/
