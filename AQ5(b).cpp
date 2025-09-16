#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int n = q.size();
        // rotate all elements except the new one
        for (int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "stack empty\n";
            return;
        }
        cout << q.front() << " popped\n";
        q.pop();
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.pop();
    s.pop();
    s.pop();
    s.pop(); 
    return 0;
}
