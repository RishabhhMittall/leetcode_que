class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i<n; i++) {
            mp[nums[i]] ++;
        }

        vector<vector<int>> bucket(n+1);

        for(auto &it : mp) {
            int value = it.first;
            int f = it.second;

            bucket[f].push_back(value);
        }

        vector<int> ans;
        for(int i = n; i >= 0; i--) {
            if(bucket[i].size() == 0) {
                continue;
            }

            while(bucket[i].size() > 0 && k > 0) {
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
    return ans;

    }
};

// min heap

// class Solution {


// public:
// typedef pair<int, int> P;
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;

//         for(int i = 0; i<nums.size(); i++) {
//             mp[nums[i]] ++;
//         }

//         priority_queue<P, vector<P>, greater<P>> pq;

//         for(auto &it : mp) {
//             int value = it.first;
//             int freq = it.second;

//             pq.push({freq, value});

//             if(pq.size() > k) {
//                 pq.pop();
//             }
//         }

//         vector<int> res;

//         while(!pq.empty()) {
//             res.push_back(pq.top().second);
//             pq.pop();
//         }

//         return res;
//     }
// };