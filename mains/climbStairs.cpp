#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;


class Solution
{
    public:
       // vector<int> arr;
            
        int climbStairs(int  n)
        {   
            vector<int> arr;
            arr.clear();
            arr.push_back(1);
            arr.push_back(2);
            for (int i = 3; i <= n; i++)
            {   
                 arr.push_back(arr[i-2]+arr[i-3]);
            }   
            return arr[n-1] ;
        }
};




int main()
{

    Solution sol;
    cout<<sol.climbStairs(1)<<endl;
    cout<<sol.climbStairs(2)<<endl;
    cout<<sol.climbStairs(30)<<endl;

 return 0;
}
