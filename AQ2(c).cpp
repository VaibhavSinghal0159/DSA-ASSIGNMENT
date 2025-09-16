#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear, n;
public:
    CircularQueue() {
        n=5;
        front=-1;
        rear=-1;
    }

    void isEmpty() {
        if(front==-1) cout<<"Empty"<<endl;
        else cout<<"Not empty"<<endl;
    }

    void isFull() {
        if((front==0 && rear==n-1) || (rear+1)%n==front)
            cout<<"Full"<<endl;
        else
            cout<<"Not full"<<endl;
    }
};

int main() {
    CircularQueue cq;
    cq.isEmpty();
    cq.isFull();
}
