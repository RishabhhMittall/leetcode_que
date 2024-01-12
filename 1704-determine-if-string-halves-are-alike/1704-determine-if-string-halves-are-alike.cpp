class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
    bool halvesAreAlike(string s) {
     int mid = s.size() / 2;
    
    string first = s.substr(0, mid);
    string sec = s.substr(mid);

  
    vector<char> vfirst;
    for (char c : first) {
        if (isVowel(c)) {
            vfirst.push_back(c);
        }
    }
    int count1 = vfirst.size();

    
    vector<char> vsec;
    for (char c : sec) {
        if (isVowel(c)) {
            vsec.push_back(c);
        }
    }
    int count2 = vsec.size();

    return count1 == count2;
    }
};