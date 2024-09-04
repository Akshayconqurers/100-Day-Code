#include<iostream>
using namespace std;

int SumArr(int arr[], int n){
    
    if( n <= 0){
        return 0;
    }
    
    
    // recursive call for last element and sum of remaining element
     return arr[n-1] + SumArr (arr , n-1);
}

int main(){
    int n;
    cout << "Enter the value of n : "<<endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter the array elements : "<<endl;
    
    for (int i=0; i<n ; i++){
        cin >> arr[i];
    }
    
   
    
    int ans = SumArr(arr, n);
    cout << ans << endl;
    return 0;
}
