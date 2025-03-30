class Recursion {
    static int solution(int k) {
        int sum = 0;
        for(int i=k; i>0; i--) {
            k+=i;
        }
        return k;
    }

    public static void main(String[] args) {
    int result = solution(10);
    System.out.println(result);
    }
}