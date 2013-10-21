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
            for (int i = 1; i< prices.size();i++)
                {
                    if(prices[i-1] < prices[i])
                        max_pro += prices[i]-prices[i-1];
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
