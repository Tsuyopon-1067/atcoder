import java.util.Scanner;
 
class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    for(int i = 0; i < 26; i++){
	        int t = sc.nextInt();
	        System.out.print((char)(t+'a'));
	    }
	}
}
