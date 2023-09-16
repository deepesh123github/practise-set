#include<iostream>
using namespace std ;
int main() {

int i , j , k ;

for(i = 1; i<=5 ; i++ ) {
k =1;                    
    for( j=1  ;j<=5;j++) {
    if(j<=6-i) {
     cout<<k;
     k++;
    }
    else
     cout<<" " ;
    }
    cout<<endl;
}
    return 0 ;
}
/*
OUTPUT
12345
1234 
123  
12   
1  
*/