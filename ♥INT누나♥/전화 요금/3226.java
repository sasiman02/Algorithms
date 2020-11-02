import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int fee = 0;
        String br = sc.nextLine();
        for(int tc = 0; tc < N; tc++) {
            String str = sc.nextLine();
            int h = Integer.parseInt(str.substring(0,2));
            int m = Integer.parseInt(str.substring(3,5));
            int t = Integer.parseInt(str.substring(6,8));
            if(h >= 7 && h < 19) {
                if(h == 18 && m + t > 60) fee += (60 - m) * 10 + (t - (60 - m)) * 5;
                else {
                    fee += t * 10;
                }
            }
            else {
                if(h == 6 && m + t > 60) fee += (60 - m) * 5 + (t - (60 - m)) * 10;
                else  fee += t * 5;
            }
        }
        System.out.println(fee);
    }
}
