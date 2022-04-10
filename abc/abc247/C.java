import java.util.Scanner;

class C {
    static String s(int n) {
        if (n == 1) return "1";
        else return s(n-1) + " " + Integer.toString(n) + " " + s(n-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String ans = s(n);
        System.out.println(ans);
    }
}
