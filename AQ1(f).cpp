#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;
public:

    /// IS EMPTY
    Queue() {
        front = -1;
        rear = -1;   
    }

    void isEmpty() {
        if(front == -1) cout << "Queue is empty\n";
        else cout << "Queue not empty\n";
    }
};

int main() {
    Queue q;
    q.isEmpty();
    return 0;
}
