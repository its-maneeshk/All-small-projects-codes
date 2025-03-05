class SimpleMethodOveloading
{
    public static void main(String[] args)
    {
        System.out.println("Answer of first: "+raka(5,6));
        System.out.println("\nAnswer of second: "+raka(5.1,6.3,7.5));
    }
    static int raka(int a,int b)
    {
        return a+b;
    }
        static double raka(double a,double b,double c)
    {
        return a+b+c;
    }
}

//method overloading means same mathod with diffrent purposes