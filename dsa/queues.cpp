#include <iostream>
using namespace std;

class Node {
   public:
    int val;
    Node* next;
    Node* prev;

    Node(int x = 0) : val(x), next(nullptr), prev(nullptr) {}
};

class MyQueues {
   private:
    Node* head;
    Node* tail;

   public:
    MyQueues() : head(nullptr), tail(nullptr) {
        cout << "queues created.\n";
    }

    ~MyQueues() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        cout << "queues deleted.\n";
    }

    // Enqueues
    void push(int x) {
        Node* newNode = new Node(x);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int back() {
        if (tail) return tail->val;
        throw runtime_error("queue is empty");
    }

    // Dequeues
    void pop() {
        if(head) {
            head = head->next;
        }
    }

    int front() {
        if (head) return head->val;
        throw runtime_error("queue is empty");
    }

    bool empty() {
        if(head == nullptr) return true;
        return false;
    }

    void print() {
        Node* cur = head;
        cout << "[";
        while (cur) {
            cout << cur->val;
            if (cur->next) cout << ", ";
            cur = cur->next;
        }
        cout << "]\n";
        cout << endl;
    }
};

int main() {
    MyQueues* q = new MyQueues();
    q->push(5);
    q->push(2);
    q->push(8);

    q->pop();
    q->pop();
    q->pop();

    cout << boolalpha << "Is Empty: " << q->empty() << "\n" << noboolalpha;

    q->print();

    delete q;
}