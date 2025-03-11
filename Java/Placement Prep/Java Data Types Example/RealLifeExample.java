class RealLifeExample {
    public static void main(String[] args) {
        // items, price of each, total, currency
        int numberOfItems = 5;
        float priceOfEach = 10;
        float total = numberOfItems *  priceOfEach;
        char currencySign = '$';

        System.out.println("Number of item: " + numberOfItems);
        System.out.println("Price of each: " + priceOfEach);
        System.out.println("Total cost: " + currencySign + total);
    }
}
