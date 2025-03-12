class RealLifeExample2 {
    public static void main(String[] args) {
        int atInitialDiceIsAt = 0;

        while(atInitialDiceIsAt < 7) {
            if (atInitialDiceIsAt == 6) {
                System.out.println("Yay Got 6!!");
            }
            else if (atInitialDiceIsAt < 1) {
                System.out.println("Nope!! have t0 wait little longer");
            }
            else if (atInitialDiceIsAt < 6) {
                System.out.println("Got " + atInitialDiceIsAt + " have to wait...");
            }
            else {
                System.out.println("something happened...");
            }
            atInitialDiceIsAt++;
            
        }
    }
}