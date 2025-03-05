import java.util.Scanner;

class Car
{
    String model;
    String color;
    String type;
    int no;
};

class defaultConstructor
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        Car car1=new Car();
        Car car2=new Car();

            //GETTING CAR 1 DETAILS FROM USER
        System.out.println("\t\tPlease entre the details Below for Car 1");
        System.out.print("Model: ");
        car1.model=sc.nextLine();
        System.out.print("Color: ");
        car1.color=sc.nextLine();
        System.out.print("Type: ");
        car1.type=sc.nextLine();
        System.out.print("Number: ");
        car1.no=sc.nextInt();


        //GETTING CAR 2 DETAILS FORM USER
        System.out.println("\t\tPlease entre the details Below for Car 2");
        System.out.print("Model: ");
        car2.model=sc.nextLine();
        System.out.print("Color: ");
        car2.color=sc.nextLine();
        System.out.print("Type: ");
        car2.type=sc.nextLine();
        System.out.print("Number: ");
        car2.no=sc.nextInt();

                //PRINTING CAR 1 DETAILS
        System.out.println("\t\tCar 1 Details:");
        System.out.println("Model: " + car1.model);
        System.out.println("Color: " + car1.color);
        System.out.println("Type: " + car1.type);
        System.out.println("Car Number: " + car1.no);

                //PRINTING CAR 2 DETAILS
        System.out.println("\t\tCar 2 Details:");
        System.out.println("Model: " + car2.model);
        System.out.println("Color: " + car2.color);
        System.out.println("Type: " + car2.type);
        System.out.println("Car Number: " + car2.no);
    }
}