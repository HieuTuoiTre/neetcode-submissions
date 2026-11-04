class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. Đếm tần suất xuất hiện của từng số
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        // 2. Chuyển từ map sang vector các cặp pair<int, int>: {key, tần suất}
        vector<pair<int, int>> freqList;
        freqList.reserve(mp.size());
        for (const auto& p : mp) {
            freqList.push_back(p);
        }

        // 3. Sắp xếp giảm dần theo tần suất (p.second)
        sort(freqList.begin(), freqList.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Tần suất lớn hơn đứng trước
        });

        // 4. Lấy key của k phần tử đứng đầu
        vector<int> result;
        result.reserve(k);
        for (int i = 0; i < k; i++) {
            result.push_back(freqList[i].first); // freqList[i].first chính là key
        }

        return result;
    }
};