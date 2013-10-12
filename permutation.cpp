class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<vector<int> > results;
        std::sort(num.begin(),num.end());
        do {
            results.push_back(num);
        }while(std::next_permutation(num.begin(),num.end()));
        return results;
    }
};



//another method
class Solution {
public:

    void doPermute(vector<int> &num, vector<int> &used, vector<bool> &visit, vector<vector<int> >&results, int level)
    {
        // base 
        if(level == num.size())
        {   
            results.push_back(used);
            return;
        }
        
        
        for(int i = 0; i < num.size(); i++)
        {
            if(!visit[i])
            {
                visit[i] = true;
                used[level] = num[i];
                doPermute(num, used, visit, results, level+1);
                visit[i] = false;
            }
            
        }
        return;
    }
    
    vector<vector<int> > permute(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<int> used(num.size(),0);
        vector<bool> visited(num.size(),false);
        vector<vector<int> > results;
        doPermute(num,used, visited, results,0);
        return results;
    }
};

