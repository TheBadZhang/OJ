#include <iostream>
#include <string>

using namespace std;

bool isPannaromes (string str) {
    bool flag = true;
    for (int i = 0; i < str.size ()/2; i++) {
        if (str[i] != str[str.size() - i - 1]) {
            flag = false;
        }
    }
    return flag;
}

int main () {
    
    int t;
    cin >> t;
    string str;
    while (t--) {
        cin >> str;
        if (isPannaromes (str)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    
    
    return 0;
}