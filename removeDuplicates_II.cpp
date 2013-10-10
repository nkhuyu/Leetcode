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
        int removeDuplicates(int A[], int n)
        {
            if(n <= 2) return n;
            int c = 1;
            int j = 0;
            int i;
            for(i = 1; i < n; i++)
                {
                    if(A[j] != A[i])
                    {   
                        j++;
                        A[j] = A[i];
                        c = 1;
                    }
                    else
                    {
                        if(c < 2)
                        {
                            c++;
                            j++;
                            A[j] = A[i];
                        }
                    }
                }
            return j+1;
        }

};




int main()
{
    int A[3] = {1,1,2};
    Solution sol;
    cout<<sol.removeDuplicates(A,3)<<endl;

    return 0;
}
