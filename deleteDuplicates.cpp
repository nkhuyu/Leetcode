#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;

/**
 * Definition for single-linked list
 */
struct ListNode
{   
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};
 
class Solution
{
    public:
        ListNode *deleteDuplicates(ListNode *head)
        {   
            if(head == NULL || head->next == NULL) return head;
            ListNode *slow = head, *fast = head;
            while(slow->next)
            {
                fast = fast->next;
                if(slow->val == fast->val)
                    {
                        slow->next = fast->next;
                        delete fast;
                        fast = slow;
                    }
                else
                {
                    slow = fast;
                }
            }
            return head;
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
