class main{
    public static void main(String[] args){
        Enclosure enc = new Enclosure<Animal>();
        Animal animal = new Lion("Lion1", 3);
        Animal animal1 = new Panda("Panda2", 1);
        Animal animal2 = new Panda("Panda1", 3);
        System.out.println(enc.getAnimalCount());
        enc.addAnimal(animal);
        enc.addAnimal(animal1);
        enc.addAnimal(animal2);
        System.out.println(enc.getAnimalCount());
        enc.describe();
        Zoo zoo = new Zoo();
        zoo.addEnclosure(enc);
        System.out.println(zoo.getTicketPrice());
        zoo.updateTicketPrice();
        System.out.println(zoo.getTicketPrice());
        Enclosure enc1 = new Enclosure<Animal>();
        Animal animal3 = new Panda("Panda2", 1);
        Animal animal4 = new Panda("Panda1", 3);
        enc1.addAnimal(animal3);
        enc1.addAnimal(animal4);
        zoo.addEnclosure(enc);
        zoo.updateTicketPrice();
        System.out.println(zoo.getTicketPrice());
    }
}