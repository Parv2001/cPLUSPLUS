//program to find first and last postion of an element in an sorted array

#include<iostream>
using namespace std;

//funtion for first occurence

int firstOcc(int arr[] , int n , int key){

    int s =0;
    int e=n-1;
    int mid = s +(e-s)/2;
    int ans= -1;
    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }

        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        //updating the mid 
        mid= s + (e-s)/2;
    }
    return ans;

}

//fucntion for last Occurernce

int lastOcc(int arr[],int n,int key){
    int s=0, e=n-1, mid=s + (e-s)/2 , ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
}



int main(){


    int arr[8]={1,2,3,3,6,6,67,89};
   
    
    
    cout<<"The first Occurence of 3 is at Index: "<<firstOcc(arr,8,3)<<endl;
    
    cout<<"The last Occurence of 3 is at Index: "<<lastOcc(arr,8,3)<<endl;
    return 0;
}
    
