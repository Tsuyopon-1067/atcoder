import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int k = sc.nextInt();
		String a = sc.next();
		String b = sc.next();

		System.out.println(baseNumber(a, k)*baseNumber(b, k));
	}

	static long baseNumber(String s, int k){
		long res = 0;
		for (int i = 0; i < s.length(); i++){
			res *= k;
			res += (s.charAt(i)-'0');
		}
		return res;
	}
}
