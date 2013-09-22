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
        set<vector<int> >find_triplets(vector<int> arr)
        {
            sort(arr.begin(),arr.end());
            set<vector<int> > triplets;
            vector<int> triplet;
            int n = arr.size();

            for(int i = 0; i < n; i++)
            {
                if(i!= 0 && arr[i] == arr[i-1]) continue;
                int j = i + 1;
                int k = n - 1;
                while (j < k)
                {
                    int sum_two = arr[i] + arr [j];
                    if(sum_two + arr[k] < 0)
                    {
                        j++;
                    }
                    else if(sum_two + arr[k] > 0)
                    {
                        k--;
                    }
                    else 
                    {
                        triplet.push_back(arr[i]);
                        triplet.push_back(arr[j]);
                        triplet.push_back(arr[k]);
                        triplets.insert(triplet);
                        j++;
                        k--;
                        while(j < n-1 && arr[j] == arr[j-1]) j++;
                        while(k > 0 && arr[k] == arr[k+1]) k--;
                    }
                    
                }
            }
            return triplets;
        }

};




int main()
{
    vector<int> arr;
    arr.push_back(-1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2); 
    arr.push_back(-1);
    arr.push_back(-4);
    Solution sol;
    sol.find_triplets(arr);

    return 0;
}
