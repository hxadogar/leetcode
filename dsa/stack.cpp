#include <iostream>
#include <vector>
using namespace std;

class MyStack {
   public:
    vector<int> vec;
    MyStack() {
        cout << "stack is created.\n";
    }

    ~MyStack() {
        cout << "stack is deleted.\n";
    }

    void push(int x) {
        vec.push_back(x);
    }

    void pop() {
        vec.pop_back();
    }

    int top() {
        return vec.back();
    }

    bool empty() {
        cout << boolalpha;
        if(vec.empty()) {
            cout << "stack is empty";
        } else {
            cout << "stack is not empty";
        }
        cout << endl;
        return vec.empty();
    }

    void print() {
        cout << "=================\n";
        for(int i = vec.size() - 1; i >= 0; --i) {
            cout << "|\t" << vec.at(i) << "\t|\n";
        }
        cout << "=================\n";
    }
};

int main() {
    MyStack* stk = new MyStack();
    stk->push(5);
    stk->push(7);
    stk->push(10);

    stk->print();
    stk->pop();
    stk->print();
    stk->empty();
    
    int x = stk->top();
    cout << x << endl;

    delete stk;
}