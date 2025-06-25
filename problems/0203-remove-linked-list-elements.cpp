#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

class Solution {
public:
    Node* removeElements(Node* head, int val) {
        Node* dummy = new Node(0, head);
        Node* cur = dummy;

        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }

        Node* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};