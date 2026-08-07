import java.util.*;
public class methdverlding{
    void add(int a){
        System.out.println("a value is = "+a);
    }
    void add(int a, float b){
        float c = a+b;
        System.out.println("c is add of = "+c);
    }
    public static void main(String[] args) {
        methdverlding n = new methdverlding();
        n.add(2);
        n.add(2,5.0f);
    }
}