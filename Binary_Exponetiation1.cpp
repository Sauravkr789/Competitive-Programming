#include <bits/stdc++.h>
using namespace std;
const int M=1e18+7;


void BinaryPrint(int num)
{
	for(int i=10;i>=0;i--)
	{
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

//Using Recursion
int binExpRec(int a, int b, int M)
{
	if(b==0) return 1;
	int res=binExpRec(a,b/2);
	if(b&1)
	{
		return (a*((res*1LL*res)%M)%M);
	}
	else
	{
		return ((res*1LL*res)%M);
	}
}


a=1e18 or 2^20234
int binExpItr(int a, int b)
{
	a=a%M;
	//a=binExpItr(2,20234);
	int ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=(ans*1LL*a)%M;
		}
		a=(a*1LL*a)%M;
		b=b>>1;
	}
	return ans;
}


int binExpItr(int a, int b)
{
	a=a%M;
	//a=binExpItr(2,20234);
	int ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=binMultiply(ans,a);
		}
		a=binMultiply(a,a);
		b=b>>1;
	}
	return ans;   //O(log^2(N))
}

//M is very large
int binMultiply(long long a, long long b)
{
	int ans=0;
	while(b)
	{
		if(b&1)
		{
			ans=(ans+a)%M;
		}
		a=(a+a)%M;
		b=b>>1;
	}
	return ans;
}

void solve()
{
	int a=166342837, b=833363663;
	cout<<binExpRec(a,b)<<endl;
	cout<<binExpItr(a,b)<<endl;
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int test_cases=1;
  cin>>test_cases;
  while(test_cases--) 
  {
    solve();
  }
  return 0;
}
