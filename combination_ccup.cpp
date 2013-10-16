#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public:
        vector<vector<int> > combine(int n, int k)
        {
            vector<vector<int> > results;
            vector<vector<int> > temps;
            if(k == 0)
                {
                    vector<int> result;
                    results.push_back(result);
                    return results;
                }
            else
                {
                    temps = combine(n, k-1);
                    int m = temps.size();
                    for(int i = 0; i < m; i++)
                    {
                        vector<vector<int> > tem;
                        tem = append(temps[i],n);
                        results.insert(results.end(),tem.begin(),tem.end());                 
                    }
                }
        return results;
        }


        vector<vector<int> > append(vector<int> temp, int n)
        {
            vector<vector<int> > apps;
            if(temp.size() == 0)
            {
                for(int i = 1; i <= n; i++)
                {
                    temp.push_back(i);
                    apps.push_back(temp);
                    temp.pop_back();
                }
            }
            else
            {
                for(int i = temp.back() + 1; i < n; i++)
                {
                    cout<<temp.back();
                    temp.push_back(i);
                    apps.push_back(temp);
                    temp.pop_back();
                }
            }
            return apps;
        }
};
int main()
{
    Solution sol;
    sol.combine(3,1);
    /*vector<int> temp;
    sol.append(temp,3);
    for(unsigned int i = 0; i < sol.append(temp,3).size(); i++)
    {
        for(unsigned int j = 0; j < sol.append(temp,3)[i].size(); j++)
        {
            cout<<sol.append(temp,3)[i][j];
        }
        cout<<endl;
    }*/
    return 0;
}



