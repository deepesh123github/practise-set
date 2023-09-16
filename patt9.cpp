#include<iostream>
using namespace std ;
int main() {

int i , j , k ;

for(i = 1; i<=5 ; i++ ) {
k =i;                    
    for( j=1  ;j<=5;j++) {
    if(j>=i) {
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
 2345
  345
   45
    5
*/