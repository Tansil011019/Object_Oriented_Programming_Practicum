/**
 * Animal.java
 * [Jelaskan kegunaan class ini]
 * @author [NIM] [Nama]
 */

public abstract class Animal implements Comparable<Animal> {
    //attribute
    protected int numberOfLegs;
    protected int children = 0;

    //getter and setter
    public int getNumberOfLegs(){
        return this.numberOfLegs;
    }
    public long getNumberOfChildren(){
        return this.children;
    }
    public void increaseChild(int inc){
        this.children += inc;
    }
    public abstract int getAnimalPower();

    public int compareTo(Animal a) {
        // compareTo mengembalikan:
        // 0 bila this sama dengan m
        // 1 bila this lebih dari m
        // -1 bila this kurang dari m
        if(getAnimalPower() == a.getAnimalPower()){
            return 0;
        }else if(getAnimalPower() > a.getAnimalPower()){
            return 1;
        }else{
            return -1;
        }
    }
}
