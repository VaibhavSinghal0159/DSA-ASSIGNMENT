#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;
public:

    //  DISPLAY  
    Queue() {
        front = 0;
        rear = 2;
        arr[0] = 11;
        arr[1] = 22;
        arr[2] = 33;
    }

    void display() {
        for(int i=front;i<=rear;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.display();
    return 0;
}
