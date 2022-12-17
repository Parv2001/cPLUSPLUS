#include<iostream>
using namespace std;


int GetPivot(int arr[], int n){

    int s=0;
    int e=n-1;
    int mid= s + (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s + (e-s)/2;
    }
    return s;




}

int main(){

    int arr[9]={5, 6, 7, 8, 9, 10, 1, 2, 3};

    cout<<"Pivot element is at Index: "<<GetPivot(arr,9)<<endl;


}