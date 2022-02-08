import java.util.Scanner;
import java.util.HashMap;

class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int nn = 2*n;
		char[][] a = new char[nn][m];
		int[][] k = new int[nn][2];

		for(int i = 0; i < nn; i++) {
			k[i][1] = i;
			String temp = sc.next();
			for(int j = 0; j < temp.length(); j++){
				a[i][j] = temp.charAt(j);
			}
		}

		for(int i = 0; i < m; i++) {
			for(int j = 0; j < nn; j += 2) {
				int n1 = k[j][1];
				int n2 = k[j+1][1];
				char te1 = a[n1][i];
				char te2 = a[n2][i];
				if(rsp(te1, te2) == 0) k[j][0]++;
				else if(rsp(te2, te1) == 0) k[j+1][0]++;
			}
			for(int j = 0; j < nn; j++) {
				int maxIdx = j;
				for(int l = j; l < nn; l++) {
					if(k[maxIdx][0] < k[l][0]) maxIdx = l;
					if(k[maxIdx][0] == k[l][0] && k[maxIdx][1] > k[l][1]) maxIdx = l;
				}
				int temp0 = k[maxIdx][0];
				int temp1 = k[maxIdx][1];
				k[maxIdx][0] = k[j][0];
				k[maxIdx][1] = k[j][1];
				k[j][0] = temp0;
				k[j][1] = temp1;
			}
		}
		for(int i = 0; i < nn; i++) {
			System.out.println(k[i][1]+1);
		}
	}
  
	static int rsp(int m, int o){
		return (m-o+4)%3; //W:0 D:1 L:2
	}
	static int rsp(char m, char o){
		HashMap <Character, Integer> mp = new HashMap<Character, Integer>();
		mp.put('G', 0);
		mp.put('C', 1);
		mp.put('P', 2);
		return rsp(mp.get(m), mp.get(o));
	}
} 
