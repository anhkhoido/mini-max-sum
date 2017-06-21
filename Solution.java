import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.LongStream;

/**
 * The main class of the program I use to solve the coding
 * challenge titled Mini-Max Sum by bishop15. The following
 * is the solution in Java 8. 
 *
 * @author Anh Khoi Do
 * @version 1.0 2017-06-20
 */
public class Solution {
    
    private static final int SIZE = 5;

    public static void main(String[] args) {
        
        long[] arr = new long[SIZE];
        
        input(arr);

        // Display the lowest and highest value one can obtain by adding
        // any combination of four elements in the array named arr.
        System.out.println((LongStream.of(arr).sum() - arr[4]) + " " +
                           (LongStream.of(arr).sum() - arr[0]));
    }

    /**
     * This method takes one array of a defined size. Its elements
     * are null, but with the {@link Scanner} class, the user will populate
     * it with positive integers. These integers must inclusively between
     * 1 and 10^9. Once the user has inputted the data, the array is sorted.
     * 
     * @param arr   One primitive array of type long. 
     */  
    private static void input(long[] arr) {

        Scanner writeIntegers = new Scanner(System.in);
        int temp = 0;

        for (int i = 0; i < SIZE; i++) {

            temp = writeIntegers.nextLongLong();
            if (temp >= 1 && temp <= Math.pow(10.0, 9.0)) arr[i] = temp;
            temp = 0;
        }

        writeIntegers.close();
        Arrays.sort(arr);
    }
}
