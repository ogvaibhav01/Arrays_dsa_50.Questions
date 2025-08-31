/*Given an array of positive integers arr[] of size n, 
the task is to find second largest distinct element in the array.*/

//Note: If the second largest element does not exist, return -1.
//Input: arr[] = [12, 35, 1, 10, 34, 1]
//Output: 34

#include<iostream>
using namespace std;
int main(){
    int num[]={12,35,1,10,34,1};
    int size;
    int max=0;
    size = sizeof(num)/sizeof(num[0]);
    for(int i=0;i<size;i++){
        if(num[i]>max){
            max = num[i];

        }
    }
    cout<<max;
}