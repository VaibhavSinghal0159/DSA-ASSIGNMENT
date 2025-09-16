#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear, n;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
        n = 5;
    }

    void enqueue(int x) {
        if((front==0 && rear==n-1) || (rear+1)%n==front) {
            cout<<"Queue full"<<endl;
            return;
        }
        if(front==-1) front=0;
        rear = (rear+1)%n;
        arr[rear]=x;
        cout<<x<<" added"<<endl;
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cq.enqueue(5);
    cq.enqueue(6); 
}
