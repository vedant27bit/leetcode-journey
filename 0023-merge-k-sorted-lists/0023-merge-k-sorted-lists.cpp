/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
       vector<int>values;

       for(ListNode* head : lists){
            while(head != nullptr){
                values.push_back(head -> val);
                head = head -> next;
            }
       }

       sort(values.begin(),values.end());

       ListNode* dummy =  new ListNode(0);
       ListNode* current = dummy;

       for(int x: values){
        current -> next = new ListNode(x);
        current = current -> next;
       }

       return dummy -> next;
    }
};