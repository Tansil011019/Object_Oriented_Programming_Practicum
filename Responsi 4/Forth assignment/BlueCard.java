public class BlueCard extends Card{
    // constructor
    public BlueCard(Double number){
        super(number);
    }

    public void printInfo(){
        System.out.println("Kartu Biru: "+ super.getNumber());
    }

    public Double value(){
        return super.getNumber() + 0.1;
    }
}
