public class member_innerclass {
    private String name;
    private int age;

    public member_innerclass(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayInfo() {
        System.out.println("Name: " + name + ", Age: " + age);
    }

    // Inner class
    public class Address {
        private String city;
        private String country;

        public Address(String city, String country) {
            this.city = city;
            this.country = country;
        }

        public void displayAddress() {
            System.out.println("City: " + city + ", Country: " + country);
        }
    }

    public static void main(String[] args) {
        member_innerclass person = new member_innerclass("John Doe", 30);
        person.displayInfo();

        member_innerclass.Address address = person.new Address("New York", "USA");
        address.displayAddress();
    }
}