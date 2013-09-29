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
        bool checkSub(TreeNode *p, TreeNode *q)
        {
            if(p == NULL && q == NULL) return true;
            if(p == NULL || q == NULL) return false;
            if(p->val == q->val && checkSub(p->left,q->left) && checkSub(p->right, q->right)) return true;
            return false;        
        }

        bool isSameTree(TreeNode *p, TreeNode *q)
        {
            return checkSub(p,q);
        }
};




int main()
{
    TreeNode *p,*q;
    p->val = 2;
    p->left = NULL;
    p->right = NULL;
    q->val = 2;
    q->left = NULL;
    q->right = NULL;
    Solution sol;
    cout<<sol.isSameTree(p,q)<<endl;

    return 0;
}
