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
        * newton's method
        */
        int sqrt(int x)
        {
            double a = 1;
            double b;
            while(int(a)-int(b))
            {
                b = a;
                a = b/2 + x/(2*b); 
            }
            return int(b);
        }

        /**
         *
         * another method
         */

        int sqrt1(int x)
        {
            int L = 0, R = x, mid;

            while( (R-L) > 1)
            {
                mid = (R+L)/2;
                if(mid > x/mid)
                    R = mid;
                else if(mid < x/mid)
                    L = mid;
                else
                    return mid;
            }
            return L;
        }

};




int main()
{
    int x = 55; 
    Solution sol;
    cout<<sol.sqrt1(x)<<endl;

    return 0;
}
