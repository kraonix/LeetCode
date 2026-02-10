public class Solution {
    public string ReversePrefix(string s, int k) {
        if (string.IsNullOrEmpty(s) || k <= 0)
            return s;

        k = Math.Min(k, s.Length);

        char[] arr = s.ToCharArray();
        Array.Reverse(arr, 0, k);

        return new string(arr);
    }
}