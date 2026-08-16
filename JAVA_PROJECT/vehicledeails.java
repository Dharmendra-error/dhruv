import java.util.*;

class vehicle {
    static void vehicle() {
        System.out.println("Automated vehicles:");
    }
}

class car extends vehicle {
    static void ferrari() {
        System.out.println("Ferrari was made in Italy.");
    }
}

class mountbike extends vehicle {
    static void mountbike() {
        System.out.println("Specialized bikes for mountain climbing.");
    }
}

class porsche extends vehicle {
    static void porsche() {
        System.out.println("Race car Porsche, ruling over the hearts of many race car enthusiasts.");
    }
}

class f1 extends vehicle {
    static void f1() {
        System.out.println("F1s are dedicated race cars.");
    }
}

public class vehicledeails {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        vehicle.vehicle();

        System.out.println("\nChoose a vehicle:");
        System.out.println("1. Ferrari");
        System.out.println("2. Mountain Bike");
        System.out.println("3. Porsche");
        System.out.println("4. F1");

        System.out.print("Enter your choice: ");
        int n = sc.nextInt();

        switch (n) {
            case 1:
                car.ferrari();
                break;

            case 2:
                mountbike.mountbike();
                break;

            case 3:
                porsche.porsche();
                break;

            case 4:
                f1.f1();
                break;

            default:
                System.out.println("Invalid choice.");
        }

        sc.close();
    }
}