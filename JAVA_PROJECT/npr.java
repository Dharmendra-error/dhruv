import java.util.*;
public class npr{
    public static int fact(int n){
        int fact = 1;
        for(int i = 1; i <= n ; i++){
            fact *= i;
        }
        return fact;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter any number: ");
        int n = sc.nextInt();
        System.out.print("enter number r: ");
        int r = sc.nextInt();
        
        int nfact = fact(n);
        int nmr = fact(n - r);
        int npr = nfact / nmr;

        System.out.print("number of permutation: "+npr);
        sc.close();
    }
    
    
}
