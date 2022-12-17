#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){

    cout<<"printing the array"<<"  "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
        

    }
    cout<<endl;

}
int main(){

    int first[5]={1,2,3,4, 5};
    cout<<"third index is "<<first[3]<<endl;
    
    PrintArray(first,3);

  int second[10]={2,4,4,6,54,23,7,34};
  cout<<"fifth index is"<<second[5]<<endl;
  PrintArray(second,10);
  int TheSize= sizeof(second)/sizeof(int);
  cout<<"the size of array is "<<TheSize;

}