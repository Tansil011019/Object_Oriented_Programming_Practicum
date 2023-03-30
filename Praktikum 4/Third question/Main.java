class Main{
    public static void main(String[] args){
        DaftarBelanja daftar = new DaftarBelanja(5);
        daftar.belanja(5, "shampoo");
        daftar.print();
        daftar.belanja(5, 2, "sabun");
        daftar.print();
    }
}