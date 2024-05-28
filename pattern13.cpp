#include <iostream>
using namespace std;

int main()
{
    // string str;
    // getline(cin, str);
    // cout << str << endl;
    // string s = "Vivek";
    // int len = s.size();
    // cout << s[2] << " " << s[len-4];

int n  =6 ;
// cin >> n;
 for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << " ";
        }
        for (int j = i; j < n; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; --i) {
        for (int j = n; j > i; --j) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << " ";
        }
        for (int j = n; j > i; --j) {
            cout << "*";
        }
        cout << endl;
    }

}