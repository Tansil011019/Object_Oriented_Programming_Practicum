public class GreenCard extends Card{
    // constructor
    public GreenCard(Double number){
        super(number);
    }

    public void printInfo(){
        System.out.println("Kartu Hijau: "+ super.getNumber());
    }

    public Double value(){
        return super.getNumber();
    }
}
