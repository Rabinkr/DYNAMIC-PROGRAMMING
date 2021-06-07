#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int fib[1000]={0};
int fibo_dp(int n)
{
	fib[1]=1;
	fib[2]=1;
	if(fib[n]==0)
	{
		for(int j=3;j<=n; ++j)
		{
			if(fib[n]==0)
			fib[j]=fib[j-1]+fib[j-2];
			else
			continue;
		}
	}
	return fib[n];
}
int main()
{
	int n;
	while(1)
	{
		cout<<"Enter the integer n to find nth fibonacci no.:"<<"\n";
		cin>>n;
		if(n==0)
		break;
		cout<<fibo_dp(n)<<"\n";
	}
	return 0;
}
