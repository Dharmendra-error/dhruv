import java.util.*;
public class randomprgrm {
    public static void main(String[] args){
        Random rndm = new Random();
        
        System . out . print("Printing Random Double: ");
        double dble = rndm.nextDouble();
        System.out.println("\nRandom Double: "+dble);

        System . out . print("Printing Random Boolean: ");
        boolean isHeads = rndm.nextBoolean();

        if(isHeads){
            System.out.println("\nHeads");
        }
        else{
            System.out.println("\nTails");
        }
    }
}
