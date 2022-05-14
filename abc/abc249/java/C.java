import java.util.*;

class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String[] s = new String[n];
        for(int i = 0; i < n; ++i) s[i] = sc.next();


        int ans = 0;
        HashMap <Character, Integer> mp = new HashMap<Character, Integer>();
        for (int bit = 0; bit < (1 << n); bit++) {
            for (int i = 'a'; i <= 'z'; i++) mp.put((char)i, 0);

            for (int i = 0; i < n; i++) {
                if ((1 & (bit>>i)) == 1) {
                    for (int j = 0; j < s[i].length(); j++) {
                        char c = s[i].charAt(j);
                        int t = mp.get(c);
                        mp.put(c, t+1);
                    }
                }
            }
            System.out.println();
            int count = 0;
            for (int i = 'a'; i <= 'z'; i++) {
                if (mp.get((char)i) == k) ++count;
            }
            ans = Math.max(ans, count);
        }
        System.out.println(ans);
    }
}
