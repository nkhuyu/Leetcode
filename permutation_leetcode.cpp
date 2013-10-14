#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    vector<int> insertIntoVector(int a, vector<int> vec, unsigned int j)
    {
        /*if(vec.size() == 0)
        {
            vec.push_back(a);
        }
        else
        {*/
            vector<int>::iterator it = vec.begin() + j;
            vec.insert(it, a);
        
            return vec;
    }
    
    vector<vector<int> > permute(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<int> result;
        vector<vector<int> > results;
        if(num.size() == 0)
        {
            results.push_back(result);
            return results;
        }
        else
        {
            int a = num.front();
            num.erase(num.begin());
            vector<vector<int> >res = permute(num);
            int n = res.size();
           // cout<<n<<endl;
            for(int i = 0; i < n; i++)
                {   
                    int m = res[i].size();
                  //  cout<<m<<endl;
                    for(int j = 0; j <= m; j++)
                    {
                        vector<int> temp = insertIntoVector(a, res[i], j);
                        /*for(int k = 0; k < temp.size(); k++)
                        {
                            cout<<temp[k];
                        }
                        */
                        results.push_back(temp);
                    }

                   // cout<<endl;
                }
        }
        return results;
    }
};

int main()
{
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    Solution sol;
    vector<vector<int> > results = sol.permute(num);
    cout<<results.size()<<endl;
    cout<<results[0].size()<<endl;
    for(unsigned int i = 0; i < results.size(); i++)
    {
        for(unsigned int j = 0 ; j < results[i].size(); j++)
        {
            cout<<results[i][j];
        }
        cout<<endl;
    }
    return 0;
}
