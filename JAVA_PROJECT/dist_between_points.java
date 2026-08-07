public class dist_between_points{
    double dist(int x1,int x2, int y1, int y2){
        double d = Math.pow(x2-x1,2)+Math.pow(y2-y1,2);
        double dista = Math.sqrt(d);
        return dista;
    }
    public static void main(String[] args) {
        dist_between_points n = new dist_between_points();
        System.out.println("distance between points: "+n.dist(4,5,6,2));
    }
}