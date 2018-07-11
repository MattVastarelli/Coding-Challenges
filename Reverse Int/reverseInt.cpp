#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int revInt = 120;
    string revStr = "";
    
    revStr = to_string(revInt);
    
    if (revInt < 0) {
        if ((revInt%10) == 0) {
            revStr.erase(0,1);
            revStr.pop_back();
            reverse(revStr.begin(), revStr.end());
            cout << "-" << revStr << endl;
        }
        else {
            revStr.erase(0,1);
            reverse(revStr.begin(), revStr.end());
            cout << "-" << revStr << endl;
        }
    }
    if (revInt >= 0) {
        if ((revInt%10) == 0) {
            revStr.pop_back();
            reverse(revStr.begin(), revStr.end());
            cout << revStr << endl;
        }
        else{
            reverse(revStr.begin(), revStr.end());
            cout << revStr << endl;
        }
    }
    
    return 0;
}
