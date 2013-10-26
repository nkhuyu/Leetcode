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
        
        //swap index idea
        void rotate(vector<vector<int> > & matrix){
            int n = matrix.size();
            for(int layer = 0; layer < n/2; layer++)
            {   int first = layer;
                int last = n - 1 - layer;
                for(int i = first; i < last; i++)
                {
                    //save up top
                    int temp = matrix[first][i];

                    //up top
                    matrix[first][i] = matrix[last-i+first][first];

                    //left top
                    matrix[last-i+first][first] = matrix[last][last-i+first];

                    //buttom top
                    matrix[last][last-i+first] = matrix[i][last];

                    //right top
                    matrix[i][last] = temp;
                }
            }
        }
};



int main()
{
    Solution<int> sol;
    vector<vector<int> >results;

    vector<int> S;
    sol.printVectorVector(results);
    return 0;
}
