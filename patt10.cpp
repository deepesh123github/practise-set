#include<iostream>
using namespace std;
int main() {
int i, j , k , n  ;  
cout<<"enter a number";
cin>>n;

for(i =1; i<=n ; i++) {
     k =(n+1)-i;
     k<=n?k--:k++;
    for(j =1; j<=n ; j++) {
        if(j>=(n+1)-i) {
         cout<<k;
         k++;
        }
        else
        cout<<" ";
    } 
    cout<<endl; 
}   
    return 0;
}
 /*
 output
     5
    45
   345
  2345
 12345
012345
 */ 
