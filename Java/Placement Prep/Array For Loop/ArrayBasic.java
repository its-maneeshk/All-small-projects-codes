public class ArrayBasic {
    public static void main(String[] args) {
        // Declare and Initialize Directly (Recommended)
        int[] array = { 1, 2, 2, 4 };
        System.out.println(array.length);

// *******************************OR************************************** 

        // Declare, Allocate Memory, and Assign Values Individually
        int[] numbers; // Declaration (empty, no memory allocated)
        numbers = new int[3]; // Now memory is allocated (default values are 0)
        // Assign values
        numbers[0] = 10;
        numbers[1] = 20;
        numbers[2] = 30;
        System.out.println(numbers.length);
        
        // *******************************OR**************************************
        int[] numbersX = new int[5];
        
        // Assign values
        numbersX[0] = 10;
        numbersX[1] = 20;
        numbersX[2] = 30;
        System.out.println(numbersX.length);
    }
}
