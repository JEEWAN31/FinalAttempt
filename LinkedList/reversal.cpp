#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode (int x) {
        val = x;
        next = NULL;
    } 
    ListNode (){
        val = 0;
        next = NULL;
    }
    ListNode (int x, ListNode* next){
        val = x;
        next = next;
    }
};

struct LinkedList{
    ListNode* head;
    LinkedList(){
        head = NULL;
    }

    void reversal(){
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* ne ;
        while(current!=NULL){
            ne = current->next;
            current->next = prev;
            prev = current;
            current = ne;
        }
        head = prev;
    }

    void print(){
        ListNode* temp = head;
        while(temp!=NULL){
            cout<<temp->val;
            temp = temp->next;
        }
    }

// Pushing data at the start of a LinkedList
    void push(int data){
        ListNode* temp = new ListNode(data);
        temp->next = head;
        head = temp;
    }
};

int main(){
    LinkedList l1;
    l1.push(20);
    l1.push(4);
    l1.push(21);
    l1.push(12);

    cout<<"Given Linked List "<<endl;
    l1.print();

    l1.reversal();

    cout<<"The reversed Linked List is"<<endl;
    l1.print();
    return 0;
}