#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    //  ENQUEUE
    void enqueue(int x) {
        if (rear == 4) {
            cout << "Queue full\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " inserted\n";
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    return 0;
}
