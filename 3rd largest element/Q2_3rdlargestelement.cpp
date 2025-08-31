/* Given an array of n integers, the task is to find the third largest element. All the elements in the array are distinct integers. */
//Input: arr[] = {1, 14, 2, 16, 10, 20}
//Output: 14
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