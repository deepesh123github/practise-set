#include <iostream>
using namespace std;

int main() {
    int n;
   cout<<"enter a number";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int k = i;
        for (int j = 1; j <= i; j++) {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}

/*
output
enter a number
4
1 
2 3 
3 4 5 
4 5 6 7 
*/ 