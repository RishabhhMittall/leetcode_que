class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int> count ;
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i = 0; i<n; i++) {
            int curr = 0;
            while( (i+1) < n && arr[i] == arr[i+1]) {  // doesnt work (out of bound)-> arr[i] == arr[i+1]) && ( (i+1) < n
                curr ++;
                i++;
            }
            count.push_back(curr);
        }
        sort(count.begin(), count.end());
        for(int i = 0; i < count.size() - 1; i++){
            if(count[i] == count[i+1]){
                return 0;
            }
        }

    return 1;
         
    }
};