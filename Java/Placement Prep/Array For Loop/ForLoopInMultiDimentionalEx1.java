public class ForLoopInMultiDimentionalEx1 {
    public static void main(String[] args) {
        String[] cars = {"1st Floor: Volvo", "2nd Floor: BMW", "3rd Floor: Hundai", "4th Floor: Honda"};

        String[][] carParkingBuilding = {
            {cars[0],cars[1]},
            {cars[3],cars[2]}
        };

        for (String[] row : carParkingBuilding) {
            for (String i : row) {
                System.out.println("At " + i + " cars are parked only");
            }
        }
    }
}
