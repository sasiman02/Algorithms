import java.util.*;

class Main {
	public static void main(String[] arg) {
		Scanner s = new Scanner(System.in);
		int col = s.nextInt();
		int row = s.nextInt();
		char[][] b = new char[col][row];
		for(int i = 0; i < col; i++) {
			String str = s.next();
			for(int j = 0; j < row; j++) {
				b[i][j] = str.charAt(j);
			}
		}
		for(int i = 0; i < col; i++) {
			for(int j = 0; j < row; j++) {
				System.out.print(b[i][j]);
			}
			System.out.println();
		}
	}
}
