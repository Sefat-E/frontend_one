class Solution {
public:
    
    ListNode* middleNode(ListNode* head) {
         ListNode* temp = head;
        int lenght = 0;
        while(temp){
        lenght++;
        temp = temp->next;
    }
         temp = head;
        int mid_len =  lenght/2;
        while(mid_len--){
           temp = temp->next;
        }
        return temp;
    }
};
// https://leetcode.com/problems/middle-of-the-linked-list/