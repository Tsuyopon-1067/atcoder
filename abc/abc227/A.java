import java.util.Scanner;

class A {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int a = sc.nextInt();

        int ans = (a+k-1)%n;
        if(ans == 0) ans = n;
        System.out.println(ans);
    }
}
