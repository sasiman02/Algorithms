import java.util.*;

class Main{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        System.out.println(GCD(a,b));
        System.out.println(LCM(a,b));
    }
    public static int GCD(int a, int b) {
        if(b == 0) return a;
        else return GCD(b, a % b);
    }
    
    public static int LCM(int a, int b) {
        return a * b / GCD(a,b);
    }
}