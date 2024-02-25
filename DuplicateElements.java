// you need to find all the elements occurring more than once in the given array.


public class duplicate {
    public static void main(String[] args) {
        int[] arr = {2, 3, 1, 2, 3, 4, 1, 5, 6, 4};
    int size=arr.length;
    boolean isduplicate=false;
        System.out.print("Duplicates are ");
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                isduplicate=true;
                System.out.print(arr[i]+" ");
            }
        }
    }

    if(!isduplicate)
        System.out.println("No duplicate found ");
    }

}
