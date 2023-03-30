class Main{
    public static void main(String[] args){
        Elang elang = new Elang(100);
        System.out.println(elang.getAnimalPower());
        Gajah gajah = new Gajah(100, 2);
        System.out.println(gajah.getAnimalPower());
        Animal animal = elang;
        System.out.println(animal.getAnimalPower());
        System.out.println(animal.compareTo(gajah));
        Animal animal1 = gajah;
        elang.increaseChild(3);
        System.out.println(elang.getAnimalPower());
        System.out.println(animal1.compareTo(elang));
        // System.out.println(animal1.compareTo(gajah));
    }
}