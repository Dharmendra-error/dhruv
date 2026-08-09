public class Swapnum{
    public static void main(String[] args){
        int a = 20 ;
        int b = 10 ;
        System . out . println("Swap without 3rd variable: ");
        System . out . println("Orginal Variables - \na:" +a+ "\nb:" +b);
        a = a - b ;
        b = a + b ;
        a = b - a ;
        System . out . println("Swapped without 3rd Variables - \na:" +a+ "\nb:" +b);

                int temp;
                temp = a;
                a = b;
                b = temp;
                        System . out . println("Swapped with 3rd Variables - \na:" +a+ "\nb:" +b);

    }
}