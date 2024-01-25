class Solution {
public:
    bool makeEqual(vector<string>& words) {
       int n = words.size();

        // int charcnt = 0;
        // for(const string&word : words) {
        //     charcnt += word.length();
        // }
        // if(charcnt % n != 0){
        //     return false;
        // }

        vector<int> count (26,0);

        for( string word : words){
            for(char letter : word) {
                int idx = letter - 'a';
                count[idx] ++;
            }
        }

        for(int num : count){
            if(num % n != 0){
                return false;
            }
        }
        
        return true;
    }      
};