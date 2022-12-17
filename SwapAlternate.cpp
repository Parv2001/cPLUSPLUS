#include<iostream>
using namespace std;

//printing the array

void PrintArr(int arr[] , int n){

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
 

void SwapAlt(int arr[],int size){

for(int i=0 ; i<size ; i+=2){

    if(i+1<size){

        swap(arr[i],arr[i+1]);
    }
    


}
}


int main() {

    int even_arr[8]={5,8,9,2,7,3,1,4};
    int odd_arr[5]={7,6,1,7,2};
     

    SwapAlt(even_arr ,8);
    PrintArr(even_arr, 8 );
    

    cout<<endl;



    //for odd array
    SwapAlt(odd_arr,5);
    PrintArr(odd_arr, 5 );
    




    return 0;



}