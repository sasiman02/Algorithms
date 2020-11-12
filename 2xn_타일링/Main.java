import java.util.*;

class Main {
    static int[] d = new int[1001];
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        System.out.println(dp(x));
    }
    
    public static int dp (int x) {
        if (x == 1) return 1;
        if (x == 2) return 2;
        if (d[x] != 0) return d[x];
        return  d[x] = (dp(x - 1) + dp(x - 2)) % 10007;
    }
}
