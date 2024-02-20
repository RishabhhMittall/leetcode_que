#include<string>
class Solution {
    // string convert()
public:
    bool isStrictlyPalindromic(int n) {
       bitset<32> bin(n);
        string str = bin.to_string();
        int j = 0, k = str.length()-1;
        for(int i = 0; i<32; i++) {
            if(str[i] == 1){
                j = i;
                break;
            }
        }   
        while(j <= k) {
            if(str[j] != str[k]){
                return false;
            }
            j++;
            k--;
        }
        return true; 
    }
};