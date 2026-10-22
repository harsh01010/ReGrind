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
//two pointers


class Solution {
    public String reverseVowels(String s) {
        char[] arr = s.toCharArray();
        String vowels = "aeiouAEIOU";

        int i = 0;
        int j = arr.length - 1;

        while (i < j) {
            while (i < j && vowels.indexOf(arr[i]) == -1) {
                i++;
            }

            while (i < j && vowels.indexOf(arr[j]) == -1) {
                j--;
            }

            if (arr[i] != arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            i++;
            j--;
        }

        return new String(arr);
    }
}
