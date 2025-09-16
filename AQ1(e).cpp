#include <bits/stdc++.h>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;
public:
    Queue() {
        front = 0;
        rear = 4;   
    }

    void isFull() {
        if(rear == 4) cout << "Queue is full\n";
        else cout << "Queue not full\n";
    }
};

int main() {
    Queue q;
    q.isFull();
    return 0;
}
