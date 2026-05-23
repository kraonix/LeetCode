class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        int j = 0;

        while(word1.length() > i || word2.length() > j){
            if(word1.length() > i){
                result += word1[i];
                i++;
            }
            if(word2.length() > j){
                result += word2[j];
                j++;
            }
        }

        return result;
    }
};