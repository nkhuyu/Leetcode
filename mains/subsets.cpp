#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

template<class T>
class Solution
{
    public:
        
        void printVector(vector<T> &s)
        {
            for(unsigned int i = 0; i < s.size(); i++)
            {
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
        
        void printVectorVector(vector<vector<T> > &s)
        {
            for(unsigned int i = 0; i < s.size(); i++)
            {
                for(unsigned int j = 0; j < s[i].size(); j++)
                {
                    cout<<s[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
        vector<vector<int> > subsets(vector<int> &S)
        {
            int n = S.size();
            vector<vector<int> > results;

            if(n == 0)
            {
                vector<int> result;
                results.push_back(result);
                return results;
            }
            else
            {
                vector<int> temp;
                int S_back = S.back();
                S.pop_back();
                temp = S;
                vector<vector<int> >temp_results;
                temp_results = subsets(temp);
                results = temp_results;
                for(unsigned int j = 0; j < temp_results.size(); j++)
                {
                    temp_results[j].push_back(S_back);
                    results.push_back(temp_results[j]);
                }
            }
            return results;
        }
};



int main()
{
    Solution<int> sol;
    vector<vector<int> >results;

    vector<int> S;
    S.push_back(1);
    S.push_back(2);
    S.push_back(3);

    results = sol.subsets(S);
    sol.printVectorVector(results);
    return 0;
}
