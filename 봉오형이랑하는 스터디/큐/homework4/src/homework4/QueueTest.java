package homework4;

import java.util.Scanner;

public class QueueTest {
	static Scanner scan = new Scanner(System.in);
	static int MAX_QUEUE_SIZE = 30;
	static int queue[] = new int[30];
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int T = scan.nextInt();
		
		for(int i = 0; i < T; i++) {
			String str = scan.next();
			checkFunc(str);
		}
	}
	public static void checkFunc(String str) {
		switch(str) {
			case "push": {
				push();
				break;
			}
			case "pop": {
				pop();
				break;
			}
			case "size": {
				size();
				break;
			}
			case "empty": {
				empty();
				break;
			}
			case "front": {
				front();
				break;
			}
			case "back": {
				back();
				break;
			}
		}
	}
	
	public static void push() {
		queue[sizeF()] = scan.nextInt();
	}
	
	public static void pop() {
		
		
		if(sizeF() == 0) {
			System.out.println("-1");
		}
		
		else {
			System.out.println(queue[0]);
			for(int i = 1; i <= sizeF(); i++) {
				queue[i - 1] = queue[i];
			}
		}
		
	}
	public static void size() {
		int i = 0;
		while(queue[i] != '\0') {
			i++;
		}
		
		System.out.println(i);
	}
	
	public static int sizeF() {
		int i = 0;
		
		while(queue[i] != '\0') {
			i++;
		}
		
		return i;
	}
	public static void empty() {
		if(sizeF() == 0) {
			System.out.println(1);
		}
		
		else {
			System.out.println(0);
		}
	}
	
	public static void front() {
		if(sizeF() == 0) {
			System.out.println("-1");
		}
		
		else {
			System.out.println(queue[0]);
		}
	}
	
	public static void back() {
		if(sizeF() == 0) {
			System.out.println("-1");
		}
		
		else {
			System.out.println(queue[sizeF() - 1]);
		}
	}
}
