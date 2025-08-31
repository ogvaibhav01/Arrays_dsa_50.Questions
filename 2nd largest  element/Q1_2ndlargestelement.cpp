/*Given an array of positive integers arr[] of size n, 
the task is to find second largest distinct element in the array.*/

//Note: If the second largest element does not exist, return -1.
//Input: arr[] = [12, 35, 1, 10, 34, 1]
//Output: 34

#include<iostream>
using namespace std;
int main(){
    int num[] ={1,14,2,16,10,20};
    int max = 0;
    int smax=0;
    int size;
    size = sizeof(num)/sizeof(num[0]);
    for(int i=0;i<size;i++){
            if(num[i]>max){
                max = num[i];
            }
    }
    for(int j=0;j<size;j++){
        if(num[j]>smax && num[j]!=max){
            smax = num[j];
        }
    }cout<<smax;
}