import java.util.*;

class Main {
    static int[] d = new int[100001];
    
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int o = dp(n);
        if(o >= 9999) System.out.println("-1");
        else System.out.println(o);
    }
    
    public static int dp(int n) {
        if(n == 1 || n == 2 || n == 4 || n == 7) return 9999;
        if(n == 3) d[3] = 1;
        if(n == 5) d[5] = 1;
        if(d[n] == 0) return d[n] = dp(n - 3) > dp(n - 5) ? dp(n - 5) + 1: dp(n - 3) + 1;
        return d[n];
    }
}
