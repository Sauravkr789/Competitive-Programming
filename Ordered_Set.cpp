#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define mod 1000000007
#define nl "\n"
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef pair<int,int> pii;
typedef map<int,int> mpi;
typedef unordered_map<int,int> umpi;
typedef priority_queue<int> pqi;
typedef priority_queue <int, vector<int>, greater<int>> mpqi;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key  //less,greater,less_equal(multiset)

//-----------------DigitSum-------------------
int DigitSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

//-----------------PRIME----------------------
bool isPrime(int n){
    if(n<=1){ 
        return false;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;  
}

//------------------GCD-------------------------
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
 
//------------------LCM-------------------------
int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

//----------------Solve function-------------------
void solve()
{
	pbds A;
	
	A.insert(1);
	A.insert(2);
	A.insert(7);
	A.insert(10);
	A.insert(2);
	
	cout<<"A = "<<" ";
	for(auto i:A)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	//finding kth element
	cout<<"0th element: "<<*A.find_by_order(0)<<endl; //here it return iterator
	cout<<"1th element: "<<*A.find_by_order(1)<<endl;
	cout<<"2th element: "<<*A.find_by_order(2)<<endl;
	cout<<"3th element: "<<*A.find_by_order(3)<<endl;
	cout<<endl;
	
	//finding the no. of element smaller than x
	cout<<"No. of ele smaller than 6: "<<A.order_of_key(6)<<endl;
	cout<<"No. of ele smaller than 6: "<<A.order_of_key(1)<<endl;
	cout<<"No. of ele smaller than 6: "<<A.order_of_key(11)<<endl;
	cout<<endl;
	
	//Lower_bound -> lower bound of x = first element>=x in the set
	cout<<"lower_bound of 6: "<<*A.lower_bound(5)<<endl;
	cout<<"lower_bound of 2: "<<*A.lower_bound(2)<<endl;
	cout<<endl;
	
	//upper_bound -> upper bound of x = first element > x in the set
	cout<<"upper_bound of 7: "<<*A.upper_bound(7)<<endl;
	cout<<"upper_bound of 2: "<<*A.upper_bound(2)<<endl;
	cout<<endl;
	
	//Remove element from set
	A.erase(2);
	A.erase(11); //if not present won't  affected
	
	cout<<"A: ";
	for(auto it:A)
	{
		cout<<it<<" ";
	}
	cout<<endl;
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int test_cases=1;
  // cin>>test_cases;
  while(test_cases--) 
  {
    solve();
  }
  return 0;
}
