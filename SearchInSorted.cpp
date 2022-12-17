#include <bits/stdc++.h> 
#include <vector>
using namespace std;


int GetPivot(vector<int>& arr, int n){

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
    
    
int binarySearch(vector<int>& arr, int s, int e, int key){

    int start = s;
    int end = e;
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
    return 0;
 
}
    
    
int findPosition(vector<int>& arr, int n, int k)
{
    int Pivot = GetPivot(arr,n);
    if(k>=arr[Pivot] && k<=arr[n-1])
    {
        return binarySearch(arr,Pivot,n-1,k);
    }
    else
    {
        return binarySearch(arr,0,Pivot-1,k);
    }
}

int main() {
   vector<int> arr = {5, 6, 7, 8, 2, 3, 4};
   int k = 8;
   if(findPosition(arr, 7,  k)) 
   {
    cout << k << " is present";
   }
      else 
      {
        cout << k << " is not present";
        }
        /*int ans = findPosition(arr, 7,k);
  cout<<ans<<endl;*/
      
   return 0;
}

