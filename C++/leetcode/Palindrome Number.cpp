#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int num){
    int count = num;
    int palindrome_num = 0;
    int digits;
    while(count != 0){
        digits = count%10;
        palindrome_num = (palindrome_num + digits)*10;
        count = count/10;
    }

    palindrome_num = palindrome_num/10;
    if(palindrome_num == num && palindrome_num >= 0){
        return true;
    }
    return false;
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if(isPalindrome(num)){
        cout << num <<" is Palindrome Number" << endl;
    }else{
        cout << num << " is not Palindrome Number" << endl;
    }
    return 0;
}