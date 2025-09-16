#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int arr[5];
    int front, rear;
public:
    CircularQueue() {
        front=0;
        rear=1;
        arr[0]=99;
        arr[1]=88;
    }

    void peek() {
        if(front==-1) cout<<"Empty"<<endl;
        else cout<<"Front = "<<arr[front]<<endl;
    }
};

int main() {
    CircularQueue cq;
    cq.peek();
}
