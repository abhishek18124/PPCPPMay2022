/*

Given a running stream of integers, design an algorithm to print the median 
of the numbers in the stream each time a new integer is added to the stream.

Example : Input = 4, 6, 2, 5,   3, 1,   7, 9,   8 . . .
          Output= 4, 5, 4, 4.5, 4, 3.5, 4, 4.5, 5 . . .

*/

#include<iostream>
#include<queue>

using namespace std;

int main() {

    priority_queue<int> leftMaxHeap;
    priority_queue<int, vector<int>, greater<int>> rightMinHeap;

    int data;
    cin >> data;

    float median = data;
    cout << median << " ";

    leftMaxHeap.push(data);

    while(true) {

        cin >> data;

        if(data == -1) {
            // stop reading from the stream
            break;
        }

        if(data < median) {
            // insert the 'data' in the leftMaxHeap
            if(leftMaxHeap.size() == rightMinHeap.size()) {
                // heaps are perfectly balanced
                leftMaxHeap.push(data);
                median = leftMaxHeap.top();
            } else if(leftMaxHeap.size() < rightMinHeap.size()) {
                leftMaxHeap.push(data);
                // heaps are now balanced
                median = (leftMaxHeap.top()+rightMinHeap.top()) / 2.0;
            } else {
                rightMinHeap.push(leftMaxHeap.top());
                leftMaxHeap.pop();
                leftMaxHeap.push(data);
                // heaps are now balanced
                median = (leftMaxHeap.top()+rightMinHeap.top()) / 2.0;
            }

        } else {
            // insert the 'data' in the rightMaxHeap
            if(rightMinHeap.size() == leftMaxHeap.size()) {
                // heaps are balanced
                rightMinHeap.push(data);
                median = rightMinHeap.top();
            } else if(rightMinHeap.size() < leftMaxHeap.size()) {
                rightMinHeap.push(data);
                median = (leftMaxHeap.top()+rightMinHeap.top()) / 2.0;
            } else {
                leftMaxHeap.push(rightMinHeap.top());
                rightMinHeap.pop();
                rightMinHeap.push(data);
                // heaps are balanced;
                median = (leftMaxHeap.top()+rightMinHeap.top()) / 2.0;
            }
        }

        cout << median << " ";

    }    

    return 0;
}