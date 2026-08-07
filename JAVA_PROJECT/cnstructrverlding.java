public class cnstructrverlding{
    cnstructrverlding(){
        System.out.println("Display constructor overloading: ");
    }
    cnstructrverlding(int a, float b){
        float f = a*b;
        System.out.println("multiplication in constructor overloading: "+f);
    }
    public static void main(String[] args) {
        cnstructrverlding v = new cnstructrverlding();
        cnstructrverlding d = new cnstructrverlding(2,4.5f);

    }
}