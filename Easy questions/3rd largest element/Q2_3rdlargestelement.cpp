/*Given an array of n integers, the task is to find the third largest element. All the elements in the array are distinct integers. */
#include<iostream>
using namespace std;
void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {1, 14, 2, 16, 10, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    cout << "Third largest element is: " << arr[2]; // Index 2 = third largest
    return 0;
}
