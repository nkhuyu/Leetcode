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

       //recursive solution, it seems it's no a good solution. 
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
                    sort(temp_results[j].begin(),temp_results[j].end());
                    results.push_back(temp_results[j]);

                }
            }
            return results;
        }

        //iterative solution:
        vector<vector<int> > subsets2(vector<int> &S)
        {
            sort(S.begin(),S.end());
            vector<vector<int> > results(1);
            for(unsigned int i = 0; i < S.size(); i++)
            {
                int j = results.size();
                while(j > 0)
                {
                    j--;
                    results.push_back(results[j]);
                    results.back().push_back(S[i]);
                }
            }
            return results;
        }
        // iterative solution (bit method):
        vector<vector<int> > subsets3(vector<int> &S)
        {
            sort(S.begin(), S.end());
            
           
            int n = S.size();
            int size = (1 << n);
          
            vector<vector<int> > results;
            for(int k = 0; k < size; k++)
            {
                vector<int> result;
                for(unsigned int i = 0; i < S.size(); i++)
                {
                    if( k & (1 << i) )
                    {
                        result.push_back(S[i]);
                    }
                }
                results.push_back(result);
            }
            return results;
        }
};



int main()
{
    Solution<int> sol;
    vector<vector<int> >results;

    vector<int> S;
    S.push_back(3);
    S.push_back(0);
    S.push_back(1);
    results = sol.subsets3(S);
    //sort(results.begin(),results().end());
    //C++11
//    std::sort(results.begin(), results.end(), [](const std::vector< int >& a, const std::vector< int >& b){ return a[1] > b[1];} );
    sol.printVectorVector(results);
    return 0;
}
