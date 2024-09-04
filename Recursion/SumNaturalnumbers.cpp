#include<iostream>
using namespace std;

int RecurSum(int n){
    if(n <=1 ){
        return n;
    }
    
   return n + RecurSum(n-1);
}
    


int main(){
    int n ;
    cout<< "Enter the value of n : "<<endl;
    cin >> n;
    
    int ans = RecurSum(n);
    cout << ans << endl;
    
    return 0;
}
