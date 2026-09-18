public class using_this {
    int x;
    int s;

    using_this(int x, int s) {
        this.x = x;
        this.s = s;
    }
    void display() {
        System.out.println("value of x: " + this.x);
        System.out.println("value of s: " + this.s);
    }
    public static void main(String[] args) {
        using_this obj = new using_this(233, 33);
        obj.display();
    }
    
}
    