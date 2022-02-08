import java.util.Scanner;
public class Main{
    public static void main(String a[]){
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = 0;
        int AC = 0;

        for(C = 0; C < 255; C++){
            AC = A^C;
            if(AC == B) break;
        }

        System.out.println(C);   
    }
}