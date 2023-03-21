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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
       

        while(temp!= NULL){
            temp = temp -> next;
            size++;
        }
        int position = size / 2;
        if(size == 1){
            head = {};
            return head;
        }
        
        ListNode* prev = NULL ;
        ListNode* curr = head;
        int cnt  =1;
        while(cnt<position+1){
           prev = curr ;
           curr = curr->next;

           cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        

        return head;
    }
};