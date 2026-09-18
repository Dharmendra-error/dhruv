public class swap {

    int a;
    int b;
    swap(int a, int b) {
         this.a = a;
         this.b = b;
    }
    void s(swap obj) {
         int temp = obj.a;
        obj.a = obj.b;
         obj.b = temp;
    }
    void display() {
           System.out.println("value of a: " + this.a);
      System.out.println("value of b: " + this.b);

    }
    public static void main(String[] args) {
        swap obj = new swap(101, 123);
          obj.display();
           obj.s(obj);
            obj.display();
    }
}