#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v,w;
    vector<int>::iterator itr;
    int remainder;
    int result=0;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0;n>0;i++){
       remainder=n%2;
       v.push_back(remainder);
       n=n/2; 
    }
    for(int k=(v.size()-1);k>=0;k--){
        if(v[k]==1){
            result++;
        }else{
            w.push_back(result);
            result=0;
        }
    }
    itr=max_element(w.begin(),w.end());
    cout << (*itr);
    return 0;
}
