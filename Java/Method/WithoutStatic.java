class WithoutStatic
{
    void namehere()
    {
        System.out.println("ABC");
    }

    public static void main(String[] args)
    {
        WithoutStatic r=new WithoutStatic();
        r.namehere();
    }
}