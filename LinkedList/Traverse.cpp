// Traversing through a Linked List 
#include<isotream>
#include<bits/stdc++.h>

using namespace std;

struct LinkedList{
    int val;
    LinkedList *next;
    LinkedList() : val(0), next(nullptr) {};
    LinkedList(int x) : val(x), next(nullptr) {};
    LinkedList(int x, LinkedList *next) : val(x), next(next) {};
}

int main(){
    
}