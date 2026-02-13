#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;

int binExpItr(int a, long long b, int m)
{
	a%=m;
	int ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=(ans*1LL*a)%m;
		}
		a=(a*1LL*a)%m;
		b=b>>1;
	}
	return ans;
}

void solve()
{
	//when b is large
	//50^60^32 %M
	cout<<binExpItr(50,binExpItr(60,32,M-1),M)<<endl;
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
