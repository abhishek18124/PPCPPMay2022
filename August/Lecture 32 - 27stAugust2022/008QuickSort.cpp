/*

    There are given n ropes of different lengths, we need to connect these ropes into one rope. 
    The cost to connect two ropes is equal to the sum of their lengths. We need to connect the 
    ropes with minimum cost.

    Example :
    
    Input : {4, 3, 2, 6}
    Output: 29

*/

#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& v, int s, int e) {

    int pivot = v[e];

    int j = s;
    int i = j-1;

    while(j < e) {
        if(v[j] < pivot) {
            // v[j] should go in the leftPartition
            i++;
            swap(v[i], v[j]);
        }
        j++;
    }

    // place the pivot to its correct position
    swap(v[i+1], v[e]);

    return i+1;

}

void quickSort(vector<int>& v, int s, int e) {

    // base case
    if(s >= e) {
        return;
    }

    // recursive case

    // 1. partition the array around the pivot element i.e. the element at the last index
    int pivot_idx = partition(v, s, e);

    // 2. recursively sort the left and the right partition

    quickSort(v, s, pivot_idx-1);
    quickSort(v, pivot_idx+1, e);


}

int main() {

    vector<int> v = {60, 50, 20, 10, 40, 30};
    int n = v.size();

    quickSort(v, 0, n-1);

    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}