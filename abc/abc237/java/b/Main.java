import java.util.Scanner;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int[][] a = new int[h][w];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < w; i++) {
            for(int j = 0; j < h; j++) {
                System.out.printf("%d ", a[j][i]);
            }
            System.out.println();
        }
    }
}
