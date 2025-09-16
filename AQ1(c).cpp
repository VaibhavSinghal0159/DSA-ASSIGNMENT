#include <bits/stdc++.h>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;
public:
    
    //  PEEK 
    Queue() {
        front = 0;
        rear = 1;
        arr[0] = 100;
        arr[1] = 200;
    }

    void peek() {
        cout << "Front element: " << arr[front] << endl;
    }
};

int main() {
    Queue q;
    q.peek();
    return 0;
}
