package coding.java.input;

import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // System.in is the inputStream : we need to close the input stream object
        int ip = sc.nextInt(); 
        System.out.println(ip);

        sc.close();
    }
}
