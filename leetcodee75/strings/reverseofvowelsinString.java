import java.util.*;

class Solution {
    public String reverseVowels(String s) {
        char[] arr = s.toCharArray();
        String vowels = "aeiouAEIOU";
        java.util.ArrayList<Character> list =
            new java.util.ArrayList<>();

        for (char ch : arr) {
            if (vowels.indexOf(ch) != -1) {
                list.add(ch);
            }
        }

        int j = list.size() - 1;

        for (int i = 0; i < arr.length; i++) {
            if (vowels.indexOf(arr[i]) != -1) {
                arr[i] = list.get(j);
                j--;
            }
        }

        return new String(arr);
    }
}
