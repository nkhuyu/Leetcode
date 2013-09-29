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
        /**
        * O(log n)
        */
        int searchInsert(int A[], int n, int target)
        {
            int left = 0, right = n-1, mid;
            while(right-left > 1)
            {
                mid = (left+right)/2;
                if(A[mid] == target)
                {
                    return mid;
                }
                else if(target > A[mid])
                {
                    left = mid;
                }
                else
                {
                    right = mid;
                }
            }
            return left;
        }

        /**
        * O(n) 
        */
        int searchInsert(int A[],int n, int target)
        {
            int i;
            for(i = 0;i < n-1; i++)
            {
                if(target <= A[i])
                    break;
            }
            return i;
        }
            

};




int main()
{
    return 0;
}
