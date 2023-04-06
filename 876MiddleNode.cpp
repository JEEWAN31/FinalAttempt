#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    private:
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

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