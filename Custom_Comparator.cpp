bool cmp(pair<int,int> a, pair<int,int> b)
{
	if(a.first!=b.first)
	{
		return a.first<b.first; //jo chahiye return kar do
	}
	return a.second>b.second;
}
