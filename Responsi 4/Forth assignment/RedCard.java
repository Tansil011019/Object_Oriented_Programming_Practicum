public class RedCard extends Card{
    // constructor
    public RedCard(Double number){
        super(number);
    }

    public void printInfo(){
        System.out.println("Kartu Merah: "+super.getNumber());
    }

    public Double value(){
        return super.getNumber() + 0.3;
    }
}
