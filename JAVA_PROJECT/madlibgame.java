import java.util.*;
public class madlibgame{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter Adjective(description): ");
        String adj = sc.nextLine();

        System.out.print("Enter Noun(animal / person): ");
        String noun = sc.nextLine();

        System.out.print("Enter Verb(action): ");
        String verb = sc.nextLine();

        System.out.print("Enter Adjective(description): ");
        String adj2 = sc.nextLine();

        System.out.print("Enter Adjective(description): ");
        String adj3 = sc.nextLine();

        System.out.print("Enter Noun(animal / person): ");
        String noun1 = sc.nextLine();

        System . out .println("\nToday i went to a "+adj+" zoo");
        System . out .println("There i saw "+noun+".");
        System . out .println("He was "+adj2+" "+verb);
        System . out .println(noun1+" was "+verb+" and yelling!");
        System . out .println("I was "+adj3);

        sc.close();
    }
}