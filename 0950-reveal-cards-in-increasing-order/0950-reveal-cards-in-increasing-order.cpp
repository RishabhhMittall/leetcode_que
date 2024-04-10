class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
         int n = deck.size();
        vector<int> ans(n);
        queue<int> indices;
        
        sort(deck.begin(), deck.end());
        for(int i = 0; i < n; i++){

            indices.push(i);
        }
        for(int i = 0; i < n; i++) {
           
            ans[indices.front()] = deck[i];
            indices.pop();
            
            if (!indices.empty()) {
                indices.push(indices.front());
                indices.pop();
            }
        }

        return ans;
    }
};