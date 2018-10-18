#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int product;
    for(int i=1;i<=10;i++){
        product=n*i;
        cout << n << " x " << i << " = " << product << endl;
        product=0;
    }
    return 0;
}
