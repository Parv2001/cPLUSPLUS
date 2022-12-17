#include<iostream>
using namespace std;


bool search(int arr[], int key, int size){
    
    
    for(int i=0; i<size; i++){
        
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
    
}

int main(){
    
    int arr[7]= {2,3,5,7,4,32,-76};
    int key;
    cin>>key;
    
    bool found = search(arr,key,7);
    
    if(found){
        cout<<key<<" is Present "<<endl;
        
    }
    
    else{
        cout<<key<<" is Absent "<<endl;
    }
    
    return 0;
    
      
}
