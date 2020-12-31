import java.util.*;
class Main {
	public static void main(String[] args) throws Exception {
		Scanner br = new Scanner(System.in);
		int N = br.nextInt();
		int M = br.nextInt();
		int[] arr = new int[N + 1];
		
		for (int i = 1; i < N + 1; i++) {
			arr[i] = br.nextInt();
		}
		
		long[] sums = new long[N + 1];
		for (int i = 1; i < N + 1; i++) {
			sums[i] = sums[i - 1] + arr[i];
		}
		for(int i = 0; i < M; i++) {
			int a = br.nextInt();
			int b = br.nextInt();
			
			int sum = (int)(sums[b] - sums[a - 1]);
			
			if (sum > 0) System.out.println("+" + sum);
			else System.out.println(sum);
		}
	}
}
