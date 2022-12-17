#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    //condition

    while(start<=end){

       if(arr[mid]==key){
       return mid;
       }
    //going to right wala part
       if(key > arr[mid]){

        start = mid + 1;
       }

       else{
        end = mid - 1;
       }

       mid = start + (end-start)/2;
    }
    return -1;
 
}


int main(){
    
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int ans = binarySearch(even,6,12);
    

    cout<<"THE INDEX OF 12 is "<<ans<<endl;

    int ans2 = binarySearch(odd,6,11);
    cout<<"THE INDEX OF 11 is "<<ans2<<endl;





}
