#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> integer2binary(int x)
{
    vector<int> res;
    res.resize(32);
    for(int i = 0; i < 32; i++)
    {
        res.push_back( (x>>i)&1 );
    }
    reverse(res.end(),res.begin());
    return res;
}



int main()
{
    int x = 1;
    integer2binary(x);
	return 0;	
}
