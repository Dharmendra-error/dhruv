import java.util.Scanner;
public class areaofcircle {
    public static void main(String[] args){

        float rad , area;
        Scanner n = new Scanner(System.in);

                        System.out.print("Enter Radius: ");

        rad = n.nextFloat();
        area = (float)(Math.PI*Math.pow(rad,2));

        System.out.println("Area of circle = "+area);
        n.close();
    }
}
