#include<iostream>
using namespace std ;
int main() {
    int n;
    cout<<"enter a number =";
    cin>>n;
int count = 0;
    for(int i =1 ; i<=n ; i++) {
for(int j =1 ; j<=n ; j++) {
 count = count +1 ;
 cout<<count;
    }  
     cout<<endl;
    }
    return 0;
}



/*
output
enter a number = 3
123
456
789
*/ 