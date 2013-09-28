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
        int maxProfix(vector<int> &prices)
        {
            int max_pro = 0;
            int min = 0;
            for (int i = 0; i< prices.size();i++)
                {
                    if(prices[i] < prices[min])
                        min = i;
                    max_pro = max(max_pro, prices[i]-prices[min]);
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
    cout<<sol.maxProfix(prices)<<endl;

    return 0;
}
