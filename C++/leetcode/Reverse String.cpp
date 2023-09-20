#include<bits/stdc++.h>

using namespace std;

void reverseString(vector<char>& s) {
        int n = s.size(), i = 0;
        vector<char> t = s;
        while(!t.empty()){
            s[i] = t.back();
            i++; t.pop_back();
        }
    }

int main(){
    int n; cin >> n;
    vector<char> str(n);
    for (int i = 0; i < n; i++){
        cin >> str[i];
    }
    reverseString(str);
    for (auto i = str.begin(); i != str.end(); i++){
        cout << *i << " ";
    }
    return 0;
}