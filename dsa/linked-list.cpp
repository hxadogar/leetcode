#include <iostream>
#include <string>
using namespace std;

class SinglyNode {
   public:
    int val;
    SinglyNode* next;

    SinglyNode(int val) : val(val), next(nullptr) {}

    string toString() const {
        return to_string(val);
    }

    void display() {
        SinglyNode* cur = this;

        cout << "Single Linked list" << endl;
        while (cur) {
            cout << cur->val << "->";
            cur = cur->next;
        }
        cout << "null" << endl;
    }

    bool search(int x) {
        SinglyNode* cur = this;

        while (cur) {
            if(cur->val == x) {
                return true;
            }
            cur = cur->next;
        }
        return false;
    }
};

class DoubleNode {
   public:
    int val;
    DoubleNode* next;
    DoubleNode* prev;

    DoubleNode(int x) : val(x), next(nullptr), prev(nullptr) {}

    string toString() const {
        return to_string(val);
    }

    void display() {
        DoubleNode* cur = this;
        cout << "Double Linked list" << endl;
        while (cur) {
            cout << cur->val << "<->";
            cur = cur->next;
        }
        cout << "null" << endl;
    }

    // DoubleNode* insertAtBeginning(int x) {}
    // DoubleNode* insertAtEnd(int x) {}
};

int main() {
    // single linked list
    SinglyNode* singleHead = new SinglyNode(5);
    SinglyNode* a = new SinglyNode(1);
    SinglyNode* b = new SinglyNode(2);
    SinglyNode* c = new SinglyNode(6);

    singleHead->next = a;
    a->next = b;
    b->next = c;

    singleHead->display();
    cout << endl;
    
    cout << boolalpha;
    cout << "find in single linked list\n";
    cout << singleHead->search(4);
    cout << endl << endl;
    cout << noboolalpha;

    // double linked list
    DoubleNode* doubleHead = new DoubleNode(5);
    DoubleNode* seven = new DoubleNode(7);
    DoubleNode* eight = new DoubleNode(8);
    DoubleNode* ten = new DoubleNode(10);

    doubleHead->next = seven;

    seven->prev = doubleHead;
    seven->next = eight;

    eight->prev = seven;
    eight->next = ten;

    ten->prev = eight;

    doubleHead->display();
}