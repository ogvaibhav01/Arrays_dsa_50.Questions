//Given an integer array, find a maximum product of a triplet in the array.
/* Input:  arr[ ] = [10, 3, 5, 6, 20]
Output: 1200
Explanation: Multiplication of 10, 6 and 20 */

//my approach will be first to find the top 3 largest numbers then multiply them 
//either we can sort array or just do it manually 

void sort(int arr[],int size){
        int temp;
        for(int i =0;i<size-1;i++){
            for(int j=0;j<size-1-i;j++){
                                if(arr[j]<arr[j+1]){
                                    temp = arr[j];
                                    arr[j] = arr[j+1];
                                    arr[j+1]=temp;
                                }
            }
        }

}
#include<iostream>
using namespace std;
int main(){
            int arr[] = {10,3,5,6,20};
            int size;
            size = sizeof(arr)/sizeof(arr[0]);
            sort(arr, size);
            cout<<arr[0]*arr[1]*arr[2];
}