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
        
        //iterative solution
        vector<int> spiralOrder1(vector<vector<int> > & matrix)
        {
            vector<int> results;
            if(matrix.empty()) return results;
            ssize_t beginX = 0, endX = matrix[0].size()-1;
            ssize_t beginY = 0, endY = matrix.size()-1;
       
           // cout<<endX<<endl;//2
           // cout<<endY<<endl;//1
           while(true)
           {
               // from left to right
               for(ssize_t i = beginX; i <= endX; i++)
                   results.push_back(matrix[beginY][i]);
               beginY++;
               if(beginY > endY) return results;
            
              // printVector(results);
               //from top to down
               for(ssize_t i = beginY; i <= endY; i++)
                   results.push_back(matrix[i][endX]);
               endX--;
               if(beginX > endX) return results;

                //printVector(results);
               //from right to left
               for(ssize_t i = endX; i >= beginX; i--)
                   results.push_back(matrix[endY][i]);
               endY--;
               if(endY < beginY) return results;

               // printVector(results);
               //from bottom up
               for(ssize_t i = endY; i >= beginY; i--)
                   results.push_back(matrix[i][beginX]);
               beginX++;
               if(beginX > endX) return results;
              // printVector(results);
              // cout<<beginX<<endX<<endl;
           }
           return results;
        }


        //recursive solution
        vector<vector<int> > getSubMatrix(vector<vector<int> > &matrix)
        {
            vector<vector<int> > results;
            ssize_t m = matrix[0].size();
            ssize_t n = matrix.size();
            if(n == 0 || n == 1 || n == 2 || m == 0 || m == 1 || m == 2) return results;
            else
                {
                    for(ssize_t i = 1; ssize_t < n-1; i++)
                    {
                        matrix[i].pop_back();
                        matrix[i].erase(matrix.begin());
                        results.push_back(matrix[i]);
                    }
                }
            return results;
        }


        vector<int> spiralOrder(vector<vector<int> >&matrix)
        {
            vector<int> results;
            if(matrix.empty()) return results;

            ssize_t X_begin = 0; X_end = matrix[0].size();
            ssize_t Y_begin = 0; Y_end = matrix.size();

          //didn't finish   

        }

};



int main()
{
    Solution<int> sol;
    vector<vector<int> >result;
    vector<int> S;
    S.push_back(1);
    S.push_back(2);
    S.push_back(3);
    vector<int> S1;
    S1.push_back(4);
    S1.push_back(5);
    S1.push_back(6);
    //vector<int> S2;
    //S2.push_back(7);
    //S2.push_back(8);
    //S2.push_back(9);


    result.push_back(S);
    result.push_back(S1);
    //result.push_back(S2);
    vector<int> results;
    results = sol.spiralOrder(result);

    sol.printVector(results);
    return 0;
}
