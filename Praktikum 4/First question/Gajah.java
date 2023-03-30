/**
 * Gajah.java
 * [Jelaskan kegunaan class ini]
 * @author [NIM] [Nama]
 */

public class Gajah extends Animal {
    //attribut
    protected int basePower;
    protected int age;

    public Gajah(int basePower, int age){
        this.basePower = basePower;
        this.age = age;
        this.numberOfLegs = 4;
    }

    public int getAge(){
        return this.age;
    }

    public int getAnimalPower(){
        return 3 * (this.basePower + this.age + this.children);
    }
}