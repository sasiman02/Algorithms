import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String a = "1";
		String b = "1";
		while(true) {
			int cnt = 0;
			a = s.next();
			b = s.next();
			if (a.equals("0")  && b.equals("0")) {
				break;
			}
			int al = a.length();
			int bl = b.length();
			int crr = 0;
			while(al != 0 && bl != 0) {
				String as = a.substring(al - 1, al);
				String bs = b.substring(bl - 1, bl);
				int sum = Integer.parseInt(as) + Integer.parseInt(bs);
				if(sum + crr >= 10) {
				cnt++;
				crr = 1;
				}
				else crr = 0;
				al--; bl--;
			}
			if(al == 0 && bl != 0) {
			String bs = b.substring(bl - 1, bl);
			if(Integer.parseInt(bs) + crr >= 10) cnt++;
			else if(bl == 0 && al != 0) {
			String as = a.substring(al - 1, al);
			if(Integer.parseInt(as) + crr >= 10) cnt++; 
			}
			}
			System.out.println(cnt);
		}
	}
}
