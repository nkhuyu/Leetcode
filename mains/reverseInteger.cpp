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
        int reverse(int x)
        {
            bool isNeg = x<0?true: false;
            int lastDigital = 0;
            int result = 0;
            x = abs(x);            
            while(x > 0)
            {
                lastDigital = x%10;
                result = lastDigital+result*10;   
                x=x/10;
            }

            if(result<0) return -1;
            if(isNeg) result*= -1;
        return result;
        }
};




int main()
{

    int x = -123;
    Solution sol;
    cout<<sol.reverse(x)<<endl;

    return 0;
}
