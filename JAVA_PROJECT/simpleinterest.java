import java.util.Scanner;
public class simpleinterest{
    public static void main(String[] args){
        int p , t ,r ;
        float si;

        Scanner n = new Scanner(System.in);

        p = n.nextInt();
        r = n.nextInt();
        t = n.nextInt();

        si = (p*t*r)/100;

        System.out.println("Result - "+si);
        n.close();



    }
}