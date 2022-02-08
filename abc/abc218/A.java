import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();      
		String s = sc.next();
		System.out.println((s.charAt(n-1) == 'o' ? "Yes" : "No"));
	}
}
