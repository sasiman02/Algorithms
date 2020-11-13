import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = "";
        while (true) {
            str = s.nextLine();
	if(str.equals("EOI")) break;
            str = str.toLowerCase();
            if (str.contains("nemo")) System.out.println("Found");
            else System.out.println("Missing"); 
        }
    }
}
