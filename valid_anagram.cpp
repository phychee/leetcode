class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> lmap;
        for (auto &ch : s) {
            if (lmap.find(ch) == lmap.end())
                lmap[ch] = 1;
            else
                lmap[ch]++;
        }

        map<char, int> tmap;
        for (auto &ch : t) {
            if (tmap.find(ch) == tmap.end())
                tmap[ch] = 1;
            else
                tmap[ch]++;
        }

        if (lmap == tmap)
            return true;
        else
            return false;

    }
};
