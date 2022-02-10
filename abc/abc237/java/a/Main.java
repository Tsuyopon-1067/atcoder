import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        long m = (long)Math.pow(2, 31);
        long n = sc.nextLong();
        System.out.println((-m <= n && n < m) ? "Yes" : "No");
    }
}
