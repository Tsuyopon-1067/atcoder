import java.util.Scanner;

class B{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] s = new int[n];
        for ( int i = 0; i < n; i++ ) {
            s[i] = sc.nextInt();
        }

        int ans = n;//まずは全て間違ってる体で 正しいのを見つけたら引いていく
        //(全てのabの組み合わせで間違ってることよりも
        ////あるabの組み合わせで正しいことを示す方が楽(対偶))
        for ( int i = 0; i < n; i++ ) {//人iの予想の正誤を判定する
            int am = s[i]/7;//b = 1のとき 7a+3 = s[i] になりaが最大になる
            int bm = am;
            for ( int a = 1; a <= am; a++ ) {//つまりaは1からs/7まで調べれば良い
                for ( int b = 1; b <= bm; b++ ) {//対象式なのでbも同上 
                    if(4*a*b+3*a+3*b == s[i]) {
                        ans--;//成り立ったら正しいので不正解数から引く
                        a = am;//a < amが成り立たないようにすれば出れる
                        break;//bのループはbreakで出れる
                    }

                }

            }
        }
        System.out.println(ans);
    }
}
