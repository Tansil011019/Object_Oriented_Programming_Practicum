class Barang{
    protected String Nama;
    protected Integer Amount;

    public Barang(String Nama, Integer Amount){
        this.Nama = Nama;
        this.Amount = Amount;
    }
    public String toString(){
        return (Amount + " " + Nama);
    }
}