import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        s = s.replace("A", "BB");
        s = s.replace("BB", "A");
        s = s.replace("BAB", "AAB");
        System.out.println(s);
    }
}
