import java.util.*;

public class management_system {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        ArrayList<manage_student> students = new ArrayList<>();

        int choice;

        do {

            System.out.println("\n========== STUDENT MANAGEMENT SYSTEM ==========");
            System.out.println("1. Add Student");
            System.out.println("2. Display Students");
            System.out.println("3. Search Student");
            System.out.println("4. Delete Student");
            System.out.println("5. update Student");
            System.out.println("6. Exit");

            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {

                case 1:

                    System.out.print("\nEnter name: ");
                    String name = sc.nextLine();

                    System.out.print("Enter Course: ");
                    String course = sc.nextLine();

                    System.out.print("Enter Section: ");
                    String section = sc.nextLine();

                    System.out.print("Enter Roll-number: ");
                    int rollnumber = sc.nextInt();
                    sc.nextLine();

                    manage_student obj =
                            new manage_student(name, course, section, rollnumber);

                    students.add(obj);

                    System.out.println("Student added successfully.");

                    break;


                case 2:

                    if (students.size() == 0) {

                        System.out.println("\nNo students available.");

                    } else {

                        System.out.println("\n---------- Student Details ----------");

                        for (int i = 0; i < students.size(); i++) {

                            students.get(i).display();

                            System.out.println();
                        }
                    }

                    break;


                case 3:

                    System.out.print("\nEnter roll number to search: ");
                    int roll = sc.nextInt();

                    boolean found = false;

                    for (int i = 0; i < students.size(); i++) {

                        if (students.get(i).rollnumber == roll) {

                            System.out.println("\nStudent found:");

                            students.get(i).display();

                            found = true;

                            break;
                        }
                    }

                    if (!found) {

                        System.out.println("Student not found.");
                    }

                    break;


                case 4:

                    System.out.print("\nEnter roll number to delete: ");
                    int del = sc.nextInt();

                    boolean deleted = false;

                    for (int i = 0; i < students.size(); i++) {

                        if (students.get(i).rollnumber == del) {

                            students.remove(i);

                            System.out.println("Student deleted successfully.");

                            deleted = true;

                            break;
                        }
                    }

                    if (!deleted) {

                        System.out.println("Student not found.");
                    }

                    break;

                case 5:
                    System.out.print("\nEnter roll number to update: ");
                    int upt = sc.nextInt();
                    sc.nextLine();

                    boolean update = false;

                    for (int i = 0; i < students.size(); i++) {

                        if (students.get(i).rollnumber == upt) {

                            System.out.print("enter new name: ");
                            students.get(i).name = sc.nextLine();

                            
                            System.out.print("enter new course: ");
                            students.get(i).course = sc.nextLine();

                            
                            System.out.print("enter new section: ");
                            students.get(i).section = sc.nextLine();

                            
                            System.out.print("enter new rollnumber: ");
                            students.get(i).rollnumber = sc.nextInt();

                            update = true;

                            break;
                        }
                    }

                    if (!update) {

                        System.out.println("Student not found.");
                    }

                    break; 
                case 6:

                    System.out.println("\nExiting Student Management System...");

                    break;


                default:

                    System.out.println("\nInvalid choice. Please enter 1-6.");
            }

        } while (choice != 6);

        sc.close();
    }
}


class manage_student {

    String name;
    String course;
    String section;
    int rollnumber;

    manage_student(String name, String course, String section, int rollnumber) {

        this.name = name;
        this.course = course;
        this.section = section;
        this.rollnumber = rollnumber;
    }

    void display() {

        System.out.println("Name: " + name);
        System.out.println("Course: " + course);
        System.out.println("Section: " + section);
        System.out.println("Roll Number: " + rollnumber);
    }
}