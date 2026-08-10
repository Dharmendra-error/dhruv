import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class string_index {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter String: ");
        String S = in.next();
        System.out.print("Enter Start: ");
        int start = in.nextInt();
        System.out.print("Enter End: ");
        int end = in.nextInt();
        String sub = S.substring(start,end);
        System.out.println("Substring is -> "+sub);
    }
    
}