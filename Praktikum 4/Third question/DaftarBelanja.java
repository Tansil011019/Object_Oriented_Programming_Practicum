class DaftarBelanja{
    protected Barang[] listBelanja;
    protected int Neff;

    public DaftarBelanja(int max){
        this.listBelanja = new Barang[max];
    }

    public void belanja(int lorong, String keterangan){
        belanja(lorong, 1, keterangan);
    }

    public void belanja(int lorong, int qty, String keterangan){
        if(Neff < listBelanja.length){
            String nama = new String(keterangan + " (lorong " + lorong + ")");
            Barang barang = new Barang(nama, qty);
            listBelanja[this.Neff] = barang;
            this.Neff++;
        }
    }

    public void belanja(String barang){
        belanja(barang, 1);
    }

    public void belanja(String barang, int qty) {
        if(Neff < listBelanja.length){
            Barang item = new Barang(barang, qty);
            listBelanja[this.Neff] = item;
            this.Neff++;
        }
    }

    public void print(){
        for(int i = 1; i <= this.Neff; i++){
            System.out.println(i + ". " + listBelanja[i-1].toString());
        }
    }
}