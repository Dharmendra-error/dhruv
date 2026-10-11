import java.util.*;
public class anybase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int power = 1;
        int decimal =0;
        int num = 0, base = 0;

        System.out.print("Enter a number: ");
        num = sc.nextInt();
        System.out.print("Enter the base of the number: ");
        base = sc.nextInt();

        while (num > 0) {
            int digit = num % 10;
            decimal += digit * power;
            power *= base;
            num /= 10;
        }

        System.out.println("The decimal equivalent is: " + decimal);
        sc.close();
    }
    
}
