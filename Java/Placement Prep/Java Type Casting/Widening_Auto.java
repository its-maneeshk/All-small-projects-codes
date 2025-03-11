class Widening_Auto {
    public static void main(String[] args) {
        /* Widening Type Casting are automatically done my JVM
           byte->short->char->int->long->float->double 
        */
        
        int X = 5;
        float Y = X;

        System.out.println("Widening Type Casting [Done Automatically]: " + Y);
    }
}
