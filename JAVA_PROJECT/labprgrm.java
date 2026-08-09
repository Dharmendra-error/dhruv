import java.util.*;
// class addition{
//     float add(int num1 , float num2){
//         return num1+num2;
//     }

public class labprgrm {
    // static double c ;
    // static double d ;
    // static double multiple;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

     /*   System.out.print("Enter Your Name: ");
        String name = sc.nextLine();
        System . out . println("Your name is "+name);

        System.out.print("Enter Integer Value: ");
        int a = sc.nextInt();

        System.out.print("Enter Float Value: ");
        float b = sc.nextFloat();

        float add = a+b;
        System . out.println("Addition of Int & Float: "+add);

        System . out . print("Enter C Value: ");
         c = sc.nextDouble();

         System.out.print("Enter D Value: ");
         d = sc.nextDouble();

         multiple = c * d ;
         System . out . println("Multiplication of C & D: "+multiple);

         System.out.print("Enter first num: ");
         int num1 = sc.nextInt();

         System.out.print("Enter second num: ");
         float num2 = sc.nextFloat();

         addition obj = new addition();

         float result = obj.add(num1,num2);
         System.out.println("Addition without static: "+result);
*/
        //  System.out.print("Enter Mass: ");
        //  double mas = sc.nextDouble();
        //  System.out.print("Enter Velocity: ");
        //  double vel = sc.nextDouble();
        //  double ki = 0.5*(mas*vel*vel);
        //  System.out.println("Kinetic Energy = "+ki);

        // Distance between two points

        // double x1 , x2;
        // System.out.println("Enter x1 & x2 co-ordinates: ");
        // x1 = sc.nextDouble();
        // x2 = sc.nextDouble();
        // double y2 , y1;
        // System.out.println("Enter y1 & y2 co-ordinates:");
        // y1 = sc.nextDouble();
        // y2 = sc.nextDouble();

        // double d ; 
        // d = Math.sqrt((y2-y1)+(x2-x1));

        // System.out.println("Distance = "+d);

        // Multiplication table

        // System.out.println("Enter chosen number for multiplication: ");
        // int num = sc.nextInt();

        // for(int i = 1; i<=10; i++){
        //     System.out.println(num+" X "+i+" = "+(num*i));
        // }
        
        // System.out.println("Enter number for checking prime number: ");
        // int num1 = sc.nextInt();

        // if(num1%2!=0){
        //     System.out.println("Prime");
        // }
        // else{

        //     System.out.println("Not a Prime");

        // }
        
        System.out.println("Enter number:");
        int num = sc.nextInt();

    
        
        int fact = 1;
            for(int i = 0; i<=num; i++){
                fact = fact*i;
    
            }


         if (fact == num){
               System.out.println("Strong");
         }else{
              System.out.println("Not strong");

         }

    

        


        sc.close();

    }
}
