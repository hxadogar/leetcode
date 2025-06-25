#include <bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};
class Solution {
public:
    Node* middleNode(Node* head) {
        Node* cur = head;
        int counter = 0;
        
        while(head->next != nullptr) {
            counter++;
            head = head->next;
        }
        cout << counter;
        
        if(counter % 2 == 0) {
            counter = counter / 2;
        } else {
            counter = counter / 2 + 1;
        }

        for(int i = 0; i < counter; i++) {
           cur = cur->next; 
        }
        return cur;
    }
};