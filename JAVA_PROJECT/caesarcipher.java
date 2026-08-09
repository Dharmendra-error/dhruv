import java.util.*;
public class caesarcipher{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter number: ");
        n = sc.nextInt();
        char ch;
        System.out.print("Enter Character: ");
        ch = sc.next().charAt(0);
        ch = (char)((ch - 'a' + n )%26 + 'a' );
        System.out.print("Shifted: "+ch);


    }

}