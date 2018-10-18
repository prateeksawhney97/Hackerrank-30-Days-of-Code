#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    map<string,long>m;
    map<string,long>::iterator itr;
    string name;
    string search_name;
    long mobile;
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> name >> mobile;
        m.insert(make_pair(name,mobile));
    }
    while(cin >> search_name){
        itr=m.find(search_name);
        //if((itr->second)==m[search_name]){
        if(m.find(search_name)!=m.end()){
            cout << search_name << "=" << m[search_name] << endl;
        }else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
