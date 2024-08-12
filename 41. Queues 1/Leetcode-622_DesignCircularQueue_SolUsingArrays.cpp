#include "iostream"
#include "vector"
using namespace std;

class queue{
public:
    vector<int> arr;
    int front = 0;
    int back  = 0;
    int size  = 0;
    int maxSize;
     queue(int n){
        arr = *new vector<int>(n,34);
        maxSize = n;
    }

    bool enQueue(int val){
        if (size == maxSize) return false;
        else if (back == maxSize - 1) back = 0;
        else if (size) back++;
        arr[back] = val;
        size++;
        return true;
    }

    bool deQueue(){
        if (!size) return false;
        else if (front == maxSize - 1) front = 0;
        else front++;
        size--;
        return true;
    }

    int Front(){
         if (!size) return -1;
         return arr[front];
    }

    int Rear(){
        if (!size) return -1;
        return arr[back];
    }

    bool isEmpty(){
        if (!size) return true;
        return false;
    }

    bool isFull(){
         if (size == maxSize) return true;
         return false;
     }
};

int main() {
    queue q(81);

}