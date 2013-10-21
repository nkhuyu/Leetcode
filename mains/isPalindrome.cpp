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
        bool isPalindrome(int x)
        {
            if(x==0) return true;
            if(x<0) return false;
            int temp = x;
            int r = 0; 
            while(x>0)
            {
                r = r*10+x%10;
                x = x/10;
            }
            return r==temp;
        }
};




int main()
{

   
    int x = 1234321;
    Solution sol;
    cout<<sol.isPalindrome(x)<<endl;
    return 0;
}
