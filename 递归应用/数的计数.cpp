//��������
#include<bits/stdc++.h>
using namespace std;
int num[1007];

int f(int n)
{
	if(num[n]!=0)  return num[n];   //��������
	num[n]=1;       //���ݱ���Ҳ��һ��
	//�������
	for(int i=1;i<=n/2;i++) //n/2���ܳ���ԭ����һ��
	{
		num[n]+=f(i);
	}
	return num[n];
	cout<<num[n];
}
//������ս��
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
