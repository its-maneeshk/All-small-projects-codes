public class FlowerBed {
    static boolean solution(int[] flowerBed, int n) {
        if (n == 0) {
            return true;
        }
        else {
            int count = 0;
            int len = flowerBed.length;
            for (int i=0; i<len; i++) {
                if (flowerBed[i] == 0) {
                    int prev = (i==0 || flowerBed[i-1] == 0) ? 0 : 1 ;
                    int next = (i == len-1 || flowerBed[i+1] == 0) ? 0 : 1;

                    if (prev == 0 && next == 0) {
                        flowerBed[i] = 1;
                        count++;
                        if (count == n) {
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int[] flowerBeds = {1, 0, 0, 0, 1};
        int M=2;
        System.out.println(solution(flowerBeds, M));
    }
}
