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
        int maxProfit(vector<int> &prices)
        {
            int max_pro = 0;
            int len = prices.size();
            vector<int> left_max_pro(len,0);
            vector<int> right_max_pro(len,0);    
            int right_max = 0;
            int left_min = 0;

            for(int i = len-1; i >= 0; i--)
                {
                    right_max = max(right_max, prices[i]);
                    right_max_pro[i] = max(right_max_pro[i], right_max-prices[i]);
                }

            
            for (int i = 1; i < len; i++)
                {
                    left_min = min(left_min, prices[i]);
                    left_max_pro[i] = max(left_max_pro[i], prices[i]-left_min);
                    
                    max_pro = max(max_pro, left_max_pro[i]+right_max_pro[i]);
                }


            return max_pro;
        }


};




int main()
{

    vector<int> prices;
    prices.push_back(1);
    prices.push_back(2);
    prices.push_back(3);
    prices.push_back(4);
    Solution sol;
    cout<<sol.maxProfit(prices)<<endl;

    return 0;
}
