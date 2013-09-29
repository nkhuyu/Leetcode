#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;

/**
 * Definition for binary tree
 */
struct TreeNode
{   int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL),right(NULL){}
};
 
class Solution
{
    public:
        int maxDepth(TreeNode *root)
        {
            if(root == NULL) return 0;
            int left_max = maxDepth(root->left);
            int right_max = maxDepth(root->right);  
            return max(left_max+1,right_max+1);

        }
};




int main()
{
    TreeNode *root(2);
    root->left = NULL;
    root->right = NULL;
    Solution sol;
    cout<<sol.maxDepth(root)<<endl;

    return 0;
}
