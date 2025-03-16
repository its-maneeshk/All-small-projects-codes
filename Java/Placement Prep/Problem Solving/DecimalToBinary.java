public class DecimalToBinary {
    static void DB(int num) {
        int[] binary = new int[10];

        int i = 0;
        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;
            i++;
            
        }
        
        for(int l=i-1; l>=0; l--) {
            System.out.print(binary[l]);
        }
    }

    public static void main(String[] args) {
        DB(10);
    }
}
