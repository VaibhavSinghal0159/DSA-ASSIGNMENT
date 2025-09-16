#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear, n;
public:
    CircularQueue() {
        n=5;
        front=0;
        rear=2;
        arr[0]=10; arr[1]=20; arr[2]=30;
    }

    void dequeue() {
        if(front==-1) {
            cout<<"Queue empty"<<endl;
            return;
        }
        cout<<"Removed "<<arr[front]<<endl;
        if(front==rear) {
            front=rear=-1;
        } else {
            front=(front+1)%n;
        }
    }
};

int main() {
    CircularQueue cq;
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
    cq.dequeue();
}
