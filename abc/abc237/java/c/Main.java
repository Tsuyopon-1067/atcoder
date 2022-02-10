import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();

        int k = 0;
        for (int i = n-1; 0 <= i; i--) {
            if (s.charAt(i) == 'a') k++;
            else break;
        }
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'a') k--;
            else break;
        }
        StringBuilder sba = new StringBuilder();
        for (int i = 0; i < k; i++) {
            sba.append("a");
        }
        s = sba.toString() + s;
        n = s.length();

        String ans = "Yes";
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != s.charAt(n-1-i)) ans = "No";
        }
        System.out.println(ans);
    }
}
