public class Merge{
    static void mergesort(int[]arr,int left,int right){
        if (left == right){
            return ; 
        }
        int mid = left + (right - left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
    
    static void merge(int[]arr,int left,int mid,int right){
        int []temp = new int[right - left + 1];
        int r = mid + 1;
        int i = left;
        int k = 0;
        while(i<=mid && r<=right){
            if(arr[i]<=arr[r]){
                temp[k] = arr[i];
                i++;
            }
            else{
                temp[k] = arr[r];
                r++;
            }
            k++;
        }
        
        while(i<=mid){
            temp[k] = arr[i];
            i++;
            k++;
        }
        
        while(r<=right){
            temp[k] = arr[r];
            r++;
            k++;
        }
        
        // put above value in array.
        int j = left;
        int t = 0;
        while(t < temp.length){
            arr[j] = temp[t];
            j++;
            t++;
        }
        
    }
    
    public static void main(String[] args){
        int []arr = {1,4,5,8,3,2,9};
        mergesort(arr,0,arr.length-1);
        System.out.println("Sorted array: ");
        for(int i = 0; i<arr.length;i++){
            System.out.println("Sorted elements are: "+arr[i]);
        }
    }
}