import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String X = s.next();
        String Y = s.next();
        int sum = Integer.parseInt(REV(X)) + Integer.parseInt(REV(Y));
        String sol = REV(Integer.toString(sum));
        int i = 0;
// 첫 항 0 제거 알고리즘
        while(sol.substring(i, i + 1).equals("0")) {
            sol = sol.substring(i + 1, sol.length());
        }
        System.out.println(sol);
    }
    
    public static String REV(String str) {
        String out = "";
        for(int i = str.length(); i > 0 ; i--) {
            out += str.substring(i - 1, i);
        }
        return out;
    }
}