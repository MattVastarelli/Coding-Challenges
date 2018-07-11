#include <iostream>

using namespace std;

int strStr(string haystack, string needle);
int main() {
    string haystack = "hello";
    string needle = "ll";
    int found = 0;
    
    found = strStr(haystack, needle);
    
    cout << found << endl;
    return 0;
}
//------------------------------------------------------
int strStr (string haystack, string needle){
    int found = 0;
    
    found = haystack.find(needle);

    return found;
}
