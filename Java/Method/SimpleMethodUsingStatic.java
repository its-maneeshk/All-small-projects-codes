class SimpleMethodUsingStatic //DemonstratingMethod
{
    static void rakesh()   //if static keyword is removed then we have to create a instance of class see program: 
    {
        System.out.println("ABC");
    }

    public static void main(String[] args)
    {
        rakesh();
    }
}