import java.io.*;
import java.util.*;

public class Enclosure<T extends Animal> {
    private ArrayList<T> animals;

    public Enclosure() {
        // Inisialisasi ArrayList animals kosong
        this.animals = new ArrayList<T>();
    } 

    public int getAnimalCount() {
        // Mengembalikan jumlah hewan dalam this.animals
        return this.animals.size();

    }

    public void addAnimal(T animal) {
        // menambahkan seekor hewan ke dalam this.animals
        this.animals.add(animal);
    }

    public T getAnimalAt(int i) {
        // mengembalikan hewan dalam this.animals pada index i (tidak mengubah this.animals)
        return this.animals.get(i);
    }

    public void removeAnimalAt(int i) {
        // menghapus hewan pada this.animals pada index i
        this.animals.remove(i);
    }

    public boolean isEmpty() {
        // mengembalikan boolean yang menyatakan apakah this.animals kosong atau tidak
        return this.animals.size() == 0;
    }

    public void describe() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong menuliskan output serupa dengan output berikut:
        // Kandang berisi 2 ekor hewan:
        // 1. po, spesies Pandamus Maximus, umur 5 tahun
        // 2. po2, spesies Pandamus Maximus, umur 5 tahun
        if(isEmpty()){
            System.out.println("Kandang ini kosong...");
        }
        for(int i= 0; i<getAnimalCount(); i++){
            int number = i+1;
            System.out.println(number +". " +this.animals.get(i).getName() + ", spesies " + this.animals.get(i).getSpecies() + ", umur " + this.animals.get(i).getAge() + " tahun");
        }
    }

    public void feed() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong maka akan memanggil method eat pada tiap animal dalam this.animals
        if(isEmpty()){
            System.out.println("Kandang ini kosong...");
        }else{
            for(int i= 0; i<getAnimalCount(); i++){
                this.animals.get(i).eat();
            }
        }
    }

    public boolean safeForPetting() {
        // mengembalikan true apabila semua hewan dalam this.animals bersifat friendly
        for(int i= 0; i<getAnimalCount(); i++){
            if(!this.animals.get(i).isFriendly()){
                return false;
            }
        }
        return true;
    }
}