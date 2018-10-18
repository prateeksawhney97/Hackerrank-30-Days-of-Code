#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string c, result;
    cin >> a;
    cin >> b;
    //cin >> c;
    getline(cin >> ws, c);
    double sum=b+d;
    cout << a+i << endl;
    cout << fixed << setprecision(1) << sum << endl;
    cout << s+c << endl;
    return 0;
}
