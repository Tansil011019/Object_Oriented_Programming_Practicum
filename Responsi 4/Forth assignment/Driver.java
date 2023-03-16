class Driver {
    public static void main(String[] args) {
        Card card1 = new RedCard(9.0);
        Card card2 = new YellowCard(10.0);
        System.out.println(isObj1BiggerThanObj2(card1, card2));
    }    
}
