#include<iostream>
using namespace std ;
int main() {
    int n;
    cout<<"enter a number =";
    cin>>n;
int count = 1;
    for(int i =1 ; i<=n ; i++) {
for(int j =i ; j<=(i*2)-1  ;j++) { 
    cout<<j;
    }  
   
     cout<<endl;
    }
    return 0;
}

/*
output
enter a number =4
1 
2 3 
3 4 5  
4  5 6 7  
*/