
package leetcodee75.strings;

public class GcdOfStrings {

    public String gcdOfStrings(String str1, String str2) {

        if (!(str1 + str2).equals(str2 + str1)) {
            return "";
        }

        int a = str1.length();
        int b = str2.length();

        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        return str1.substring(0, a);
    }

    public static void main(String[] args) {

        GcdOfStrings obj = new GcdOfStrings();

        System.out.println(obj.gcdOfStrings("ABCABC", "ABC"));
        System.out.println(obj.gcdOfStrings("ABABAB", "ABAB"));
        System.out.println(obj.gcdOfStrings("LEET", "CODE"));
    }
}
