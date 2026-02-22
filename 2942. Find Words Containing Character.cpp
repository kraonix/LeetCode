class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for(int i = 0; i < words.size(); i++){
            set<char> temp(words[i].begin(), words[i].end());
            if(temp.count(x)){
                result.push_back(i);
            }
        }

        return result;
    }
};