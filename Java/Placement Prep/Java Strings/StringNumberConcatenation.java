public class StringNumberConcatenation {
    public static void main(String[] args) {
        String text = "Number: ";
        int num = 10;
        double pi = 3.14;
        
        // String + int
        String result1 = text + num;
        System.out.println(result1); // Output: Number: 10

        // String + double
        String result2 = text + pi;
        System.out.println(result2); // Output: Number: 3.14

        // Mixing int, double, and string
        String result3 = "Sum: " + (num + pi);
        System.out.println(result3); // Output: Sum: 13.14
    }
}
