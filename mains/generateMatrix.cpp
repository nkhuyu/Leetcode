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
        
        vector<vector<int> >generateMatrix(int n)
        {
            vector<int> res(n,0);
            vector<vector<int> > m(n,res);

            int num = 1;
            int start = 0;
            int end = n - 1;

            while(start < end)
            {
                //top
                for(int i = start; i < end; i++)
                {
                    m[start][i] = num;
                    num++;
                }
                //right
                for(int j = start; j < end; j++)
                {
                    m[j][end] = num;
                    num++;
                }
                //buttom
                for(int k = end; k > start; k--)
                {
                    m[end][k] = num;
                    num++;
                }
                //left
                for(int l = end; l > start; l--)
                {
                    m[l][start] = num;
                    num++;
                }
                start++;
                end --;
            }

            if(start == end)
            {
                m[start][start] = num;
            }

            return m;
        }

};



int main()
{
    Solution<int> sol;
    vector<vector<int> >results;
    
    results = sol.generateMatrix(5);
    sol.printVectorVector(results);
    return 0;
}
