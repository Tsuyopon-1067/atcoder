import java.util.Scanner;
public class Main{
    public static void main(String a[]){
        Scanner sc = new Scanner(System.in);

        int Ad = sc.nextInt();
        int Bd = sc.nextInt();
        int Cd = 0;

        int A[] = new int[8];
        int B[] = new int[8];
        int C[] = new int[8];

        for(int i = 0; i < 8; i++){
            A[i] = 0;
            B[i] = 0;
            C[i] = 0;
        }
        binCreate(Ad, A);
        binCreate(Bd, B);

        for(int i = 0; i < 8; i++){
            if(A[i] != B[i]){
                C[i] = 1;
                Cd += Math.pow(2, i);
            }
        }
        System.out.println(Cd);   
    }
    public static void binCreate(int x, int[] y){
        for(int i = 7; i >= 0; i--){
            if(x / Math.pow(2, i) >= 1) {//i=7なら128で割る i=0なら1で割る
                y[i] = 1;
                x -= Math.pow(2, i);
            } 
        }
    }

    public static void show (int x[]){
        for(int i = 0; i < 8; i++){
            System.out.print(x[i]);
        }
        System.out.println("");
    }
}