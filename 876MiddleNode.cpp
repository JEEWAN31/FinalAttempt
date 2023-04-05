class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * temp = head;
        int k = 0;
        while(temp!=NULL){
            temp = temp->next;
            k += 1;
        }
        temp = head;
        k = k/2 ;
        while(k>0){
            temp = temp->next;
            k--;
        }
        return temp;
    }
};