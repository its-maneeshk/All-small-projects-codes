public class DuplicateVal {
    static int RemovalOfDeplicate(int[] num) {

        int size = num.length;
        int count = 0;

        for (int i=0; i<size; i++) {
            for (int j=i+1; j<size; j++) {
                if (num[i] == num[j]) {
                    num[j] = Integer.MIN_VALUE;
                    count++;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] num = {0,0,1,1,1,2,2,3,3,4};
        
        int numberOfDuplicate = RemovalOfDeplicate(num);
        
        System.out.println("Number of Duplicates: " + numberOfDuplicate);

        int ValidIndex = 0;
        for(int each : num) {
            if (each != Integer.MIN_VALUE) {
                ValidIndex++;
            }
        }

        int[] newCollection = new int[ValidIndex];

        int index = 0;
        for (int each : num) {
            if (each != Integer.MIN_VALUE) {
                newCollection[index] = each;
                index++;
            }
        }

        for (int newEach : newCollection) {
            System.err.println(newEach);
        }
    }
}
