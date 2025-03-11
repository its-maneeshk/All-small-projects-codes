class Random {
    public static void main(String[] args) {
        double randNum = Math.random();
        System.out.println(randNum);

        // FOR 5 DIGIT RANDOM NUMBER
        int fiveDigitRandNum = (int) (Math.random() * 90000) + 10000;
        System.out.println(fiveDigitRandNum);
    }
}
