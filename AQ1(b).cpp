#include <bits/stdc++.h>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;
public:

    //  DEQUEUE
    Queue() {
        front = 0;
        rear = 2;
        arr[0] = 10;
        arr[1] = 20;
        arr[2] = 30;
    }

    void dequeue() {
        cout << "Dequeued: " << arr[front] << endl;
        front++;
    }
};

int main() {
    Queue q;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}
