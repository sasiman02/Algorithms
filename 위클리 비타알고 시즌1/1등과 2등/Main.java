import java.io.*;
class Main {
    public static void main(String[] args) throws Exception {
        boolean first = false;
        boolean second = false;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();
        for(int i = 0; i < input.length() - 1; i++) {
            if (!first && input.charAt(i) == '2') {
                if (input.charAt(i + 1) == '1') {
                    first = true;
                    i++;
                }
            }
            else if (!second && input.charAt(i) == '1') {
                if (input.charAt(i + 1) == '2') {
                    second = true;
                    i++;
                }
            }
        }

        if (first && second) System.out.println("Yes");
        else System.out.println("No");
    }
}