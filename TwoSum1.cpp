class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> numbers_temp;
        //int index1,index2;
        vector<int> result;
        for(int i=0; i<numbers.size();i++)
        {
            numbers_temp.push_back(target-numbers[i]);
        }
        int j,k;
        for (j=0;j<numbers.size();j++)
        {
            for(k=0;k<numbers.size();k++)
            if(numbers[j]==numbers_temp[k] && j!=k)
            {
                if(j<k)
                {
                result.push_back(j+1);
                result.push_back(k+1);
                }
                result.push_back(k+1);
                result.push_back(j+1);
                break;
            }
        }
        
        return result;
        
    }
};