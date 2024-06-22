#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string& s) {
    // int hash[256]={0};
    // int i;
    // // finding frequency of all chars and storing in hash array
    // for(i=0;i<s.length();i++)
    // {
    //     hash[s[i]]++;
    // }
    // // max frequency and max char nikalo
    // int max_freq=INT_MIN;
    // char max_char;
    // for(int i=0;i<256;i++)
    // {
    //     if(hash[s[i]]>max_freq)
    //     {
    //         max_freq=hash[s[i]];
    //         max_char=s[i];
    //     }
    // }
    // // now insert the max freq char in the string 
    // for(int i=0;i<s.length() ;i+2)
    // {
    //     s[i]=max_char;
    //     max_freq--;
    // }
    // if(max_freq!=0)
    // {
    //     return "";
    // }
    // hash[max_char]={0};
    // //placing the rest chars
    // for(int j=1;j<256 && hash[s[j]]>0;j+2)
    // {
    //     i=i>=s.length() ? 1 : i;
    //     s[i]=s[j];
    //     hash[s[j]]--;
    // }
    // return s;
     int hash[256] = {0};
    int n = s.length();

    // Finding frequency of all characters and storing in hash array
    for(int i = 0; i < n; i++) {
        hash[s[i]]++;
    }

    // Finding max frequency and max char
    int max_freq = INT_MIN;
    char max_char;
    for(int i = 0; i < 256; i++) {
        if(hash[i] > max_freq) {
            max_freq = hash[i];
            max_char = i;
        }
    }

    // If max frequency is more than (n+1)/2, then it's impossible to reorganize
    if(max_freq > (n + 1) / 2) {
        return "";
    }

    // Result string
    string result(n, ' ');

    // Placing the max frequency char in the even positions
    int idx = 0;
    while(hash[max_char] > 0) {
        result[idx] = max_char;
        idx += 2;
        hash[max_char]--;
    }

    // Placing the remaining characters
    for(int i = 0; i < 256; i++) {
        while(hash[i] > 0) { // frequency dekhte rehne ke liye agar zero ho jaega to nhi karenge add s mein
            if(idx >= n) {
                idx = 1; // Switch to odd positions
            }
            result[idx] = i; // accessing by converting i into char because it is to be stored in string 
            idx += 2;
            hash[i]--;
        }
    }
    return result;
    }

int main()
{    
    string strs ="fffwweeelower";
    string ans=reorganizeString(strs);
    cout<<ans;
}
