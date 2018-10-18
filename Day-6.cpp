#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    vector<char>v,w;
    string first,second,full;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> full;
        int size=full.size();
        for(int j=0;j<size;j=j+2){
            char b=full[j];
            v.push_back(b);
        }
        for(int k=1;k<size;k=k+2){
            char c=full[k];
            w.push_back(c);
        }
        for(int m=0;m<v.size();m++){
            cout << v[m];   
        }
        cout << " ";
        for(int s=0;s<w.size();s++){
            cout << w[s];           
        }
        cout << "\n";
        v.clear();
        w.clear();
    }
    return 0;
}
