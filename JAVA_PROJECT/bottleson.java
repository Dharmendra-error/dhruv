public class bottleson{
    public static void main(String[] args){
        int bottlenum = 10;
        String word = "bottles";
        while (bottlenum>0){
            if(bottlenum == 1){
                word = "bottle";
            }

            System.out.println(bottlenum+" green "+word+" hanging on the wall");
            System.out.println(bottlenum+" green "+word+" hanging on the wall");
            System.out.println(bottlenum+" green "+word+" hanging on the wall");
            System.out.println("and if one accidentaly falls...");
            bottlenum = bottlenum-1;
            if(bottlenum>0){
                System.out.println("There will be "+bottlenum+" green "+word+" hanging on the wall");
            }else{
                System.out.println("There are no green bottles to hang");
            }
            
        }
    }
}