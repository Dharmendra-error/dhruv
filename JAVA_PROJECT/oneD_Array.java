import java.util.*;

public class oneD_Array{

    public static void main(String[] args) {
	   
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number elements to be inserted: ");
        int n = sc.nextInt();
        int []a = new int[n];

        for(int i=0; i<n;i++){
          System.out.print("Enter elements : ");
            a[i] = sc.nextInt();
        }

        // Prints each sequential element in array a
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+ " ");
        }

          sc.close();

    }
}