#include "iostream"
#include "queue"
using namespace std;

class MedianFinder {
private:
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<>> right;

public:
    MedianFinder() = default;
    void addNum(int num) {
        if (left.size() == 0 || left.top() >= num) left.push(num);
        else right.push(num);

        if (left.size() > right.size()+1){
            right.push(left.top());
            left.pop();
        }
        else if (right.size() > left.size()+1){
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {
        if ((left.size()+right.size())%2 == 0) return (double)(left.top()+right.top())/2;
        else if (left.size() > right.size()) return left.top();
        return right.top();
    }
};

int main(){

}