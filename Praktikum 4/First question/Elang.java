/**
 * Elang.java
 * [Jelaskan kegunaan class ini]
 * @author [NIM] [Nama]
 */

public class Elang extends Animal {
    //attribut
    protected int basePower;
    protected int jumlahTelur;

    public Elang(int basePower){
        this.basePower = basePower;
        this.numberOfLegs = 2;
        this.jumlahTelur = 0;
    }

    public int getJumlahTelur(){
        return this.jumlahTelur;
    }

    public void bertelur(){
        this.jumlahTelur +=1;
    }
    
    public int getAnimalPower(){
        return this.basePower * this.children - this.jumlahTelur;
    }
}