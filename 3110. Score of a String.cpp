public class Solution {
    public int ScoreOfString(string s) {
        
        Dictionary<char, int> alpha = new();
        
        int j = 97;
        for(char c = 'a'; c <= 'z'; c++){
            alpha[c] = j;
            j++;
        }

        int result = 0;
        for(int i = 0; i < s.Length - 1; i++){
            result += Math.Abs(alpha[s[i]] - alpha[s[i + 1]]);
        }

        return result;
    }
}