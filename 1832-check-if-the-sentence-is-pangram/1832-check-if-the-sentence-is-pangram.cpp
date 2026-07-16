class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> vis(26, false);

        for (char c : sentence) {
            vis[c - 'a'] = true;
        }

        for (bool x : vis) {
            if (!x) return false;
        }

        return true;
    }
};