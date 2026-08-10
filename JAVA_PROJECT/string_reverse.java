import java.io.*;
import java.util.*;

public class string_reverse {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the string: ");
        String A=sc.next();
        String reverse = "";
        for(int i = A.length() - 1; i>=0; i--){
            reverse += A.charAt(i);
        }
        if (A.equals(reverse)){
            System.out.println(A+" is Palindrome.");
        }
        else{
            System.out.println(A+" Not a Palindrome.");
        }
            
        }
    }
    




