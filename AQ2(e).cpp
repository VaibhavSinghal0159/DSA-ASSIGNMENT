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
        arr[0]=11; arr[1]=22; arr[2]=33;
    }

    void display() {
        if(front==-1) {
            cout<<"Queue empty"<<endl;
            return;
        }
        int i=front;
        while(true) {
            cout<<arr[i]<<" ";
            if(i==rear) break;
            i=(i+1)%n;
        }
        cout<<endl;
    }
};

int main() {
    CircularQueue cq;
    cq.display();
}
