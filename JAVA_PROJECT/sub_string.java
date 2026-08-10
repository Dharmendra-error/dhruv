import java.io.*;
import java.util.*;

public class sub_string{

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String A: ");
        String A=sc.next();
        System.out.print("Enter String B: ");
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int sum = A.length() + B.length();
        System.out.println("sum of string A & B is -> "+sum);
        // Yes if Lexicographical comparison greater else No.
        System.out.println(A.compareTo(B)>0 ? A+" Lexicographical comparison is greater":B+" Lexicographical comparison is less");
        // Capitalize first chracter.
        String resa = A.substring(0,1).toUpperCase() + A.substring(1);
        String resb = B.substring(0,1).toUpperCase() + B.substring(1);
        System.out.println((resa+" "+resb)+" First character has been capitalized.");
    }
}



