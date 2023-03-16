import javax.security.auth.callback.Callback;
import javax.smartcardio.CardException;

public class YellowCard extends Card{
    // constructor
    public YellowCard(Double number){
        super(number);
    }

    public void printInfo(){
        System.out.println("Kartu Kuning: "+super.getNumber());
    }

    public Double value(){
        return super.getNumber() + 0.2;
    }
}
