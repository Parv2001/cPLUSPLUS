#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    
    int start =0;
    int end=size-1;
     
     while(start<=end){
         
         swap(arr[start], arr[end]);
         start++;
         end--;
         
     }
}

void printArray(int arr[],int size){
    
    
    for(int i=0; i<size; i++){
        
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}

int main(){
    
    int arr_even[6]={1,2,3,4,5,6};
    int arr_odd[5]={5,4,3,2,1};
    
    reverse(arr_even,6);
    reverse(arr_odd,5);
    
    printArray(arr_even,6);
    printArray(arr_odd,5);
    
    return 0;
}