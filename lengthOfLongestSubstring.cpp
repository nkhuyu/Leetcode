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
    int lengthOfLongestSubstring(string s)
    {
        int n=s.size();
        int i=0,j=0,maxLen=0;
        set<char> mySet;


        while(j<n)
        {
           // find repeat character
            if(mySet.find(s[j]) != mySet.end())
            { 
                i++;
                mySet.clear();
                j=i+1;
                mySet.insert(s[i]);
            }
            else
            {  
                mySet.insert(s[j]);
                maxLen=max(maxLen,j-i+1);
                j++;
            }
        }

    return maxLen;
   }
};


int main()
{
    string s = "aaaaaaaabbbbb";

    Solution sol;
    cout<<sol.lengthOfLongestSubstring(s)<<endl;

    return 0;
}
