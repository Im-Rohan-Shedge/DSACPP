class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> freq;
        int l = 0;
        int maxx = 0;
        int r = 0;
        while (r < fruits.size()) {
            freq[fruits[r]]++;
            while (freq.size() > 2) {
                freq[fruits[l]]--;

                if (freq[fruits[l]] == 0)
                    freq.erase(fruits[l]);

                l++;
            }
            maxx = max(maxx, (r - l) + 1);
            r++;
        }
    return maxx;
    }
};