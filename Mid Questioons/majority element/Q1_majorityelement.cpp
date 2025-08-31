/* Given an array arr[] of size n, find the element that appears more than ⌊n/2⌋ times. If no such element exists, return -1. */
/*  Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
    Output: 1
    Explanation: Element 1 appears 4 times. Since ⌊7/2⌋ = 3, and 4 > 3, it is the majority element. */
#include<iostream>
using namespace std;

void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){ // Ascending order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);

    int count = 1, maxCount = 1, majority = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] == arr[i - 1]){
            count++;
        } else {
            count = 1;
        }
        if(count > maxCount){
            maxCount = count;
            majority = arr[i];
        }
    }

    if(maxCount > size / 2){
        cout << "Majority element is: " << majority;
    } else {
        cout << -1;
    }

    return 0;
}
