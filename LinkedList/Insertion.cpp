#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x): val(x), next(nullptr){};
    ListNode(int x, ListNode *next): val(x), next(next){};
};


// I am having to insert element into a LinkedList. There are 3 ways to insert an elememt into it 
// 1. Insert at the beginning
// 2. Insert at the end
// 3. Insert at a given position

// Insert at the beginning
void insertAtBeginning(ListNode *head, int number){
    ListNode *temp = new ListNode(number);
    temp->next = head;
    head = temp;
}




// Insert at the end

void insertAtEnd(ListNode *head, int number){
    ListNode *temp = new ListNode(number);
    ListNode *temp2 = head;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}





// Insert at a given position

void insertAtPosition(ListNode *head, int number, int position){
    ListNode *temp = new ListNode(number);
    ListNode *temp2 = head;
    int k = 1;
    while(k<position-1){
        temp2 = temp2->next;
        k++;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}


int mains(){
    bool insert = true;
    ListNode *head = new ListNode(10);
    while(insert){
        int choice;
        int number;
        cout<<"Enter the element to be inserted: ";
        cin>>number;
        cout<<"Enter the position where you want to insert the element: "<<endl;
        cout<<"1. Insert at the beginning"<<endl;
        cout<<"2. Insert at the end"<<endl;
        cout<<"3. Insert at a given position"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                // Insert at the beginning
                insertAtBeginning(head, number);
                break;
            case 2:
                // Insert at the end
                insertAtEnd(head, number);
                break;

            case 3:
                // Insert at a given position
                cout<<"Enter the position where you want to insert the element: ";
                int position;
                cin>>position;
                insertAtPosition(head, number, position);
                break;

            default:
                cout<<"Invalid choice"<<endl;
                break;
        }

    }
}
