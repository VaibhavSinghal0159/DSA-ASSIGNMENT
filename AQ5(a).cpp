#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1, q2;
public:
    void push(int x) {
        q1.push(x);
    }

    void pop() {
        if (q1.empty()) {
            cout << "stack empty\n";
            return;
        }
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        cout << q1.front() << " popped\n";
        q1.pop();
        
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    s.pop();
    s.pop(); 
    return 0;
}
