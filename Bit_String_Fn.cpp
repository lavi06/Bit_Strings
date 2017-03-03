#include <iostream>
using namespace std;
long long f[int (1e8+1)];
long long FibSum(long long n)
{

int M=(1e9+7);
f[0]=1; f[1]=2;
for(long long i=2;i<=n;i++)
{
	f[i]=(f[i-1]%M+(f[i-2]%M))%M;
}
return f[n]%M;
}

int main()
{
    long long input;long long t;
	cin>>t;
	while(t)
	{
	  cin>>input;
	  cout<<FibSum(input)<<endl;
	  t--;
	}
	return 0;
}
