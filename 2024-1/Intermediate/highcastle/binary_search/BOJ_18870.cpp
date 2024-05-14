#include<bits/stdc++.h>

using namespace std;

vector<long long> x1;
vector<long long> x2;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
  
  	int n, i;
  	long long tmp;
  	
  	cin >> n;
  	
  	for(i = 0; i < n; i++)
  	{
  		cin >> tmp;
  		x1.push_back(tmp);
  		x2.push_back(tmp);
  	}
  	
  	sort(x1.begin(), x1.end());
  	x1.erase(unique(x1.begin(), x1.end()), x1.end());
  	
  	for(i = 0; i < n; i++)
  	{
  		cout << lower_bound(x1.begin(), x1.end(), x2[i]) - x1.begin() << " ";
  	}
    
    return 0;
}
