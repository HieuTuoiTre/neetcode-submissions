class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map lưu: key là chuỗi đã sort, value là danh sách các từ gốc
        unordered_map<string, vector<string>> mp;

        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // Sắp xếp ký tự bên trong từ: "tea" -> "aet"
            
            mp[key].push_back(s); // Gom từ gốc "tea" vào nhóm có key là "aet"
        }

        // Chuyển kết quả từ map sang vector<vector<string>>
        vector<vector<string>> result;
        result.reserve(mp.size()); // Cấp phát trước bộ nhớ để tối ưu tốc độ

        for (auto& pair : mp) {
            result.push_back(move(pair.second)); // Đưa nhóm từ vào result
        }

        return result;
    }
};
