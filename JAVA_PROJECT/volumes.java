public class volumes{
    double sphere(int r){

        return 3.14 * Math.pow(r,3)*(4.0/3.0);
    }
    double cone(int r, int h){
        
        return (1.0/3.0)*3.14*Math.pow(r,2)*h;
    }
    public static void main(String[] args) {
        volumes n = new volumes();
        System.out.println("Enter radius : "+n.sphere(3));
       System.out.println("Enter radius & height: "+n.cone(5,4));
    }

}