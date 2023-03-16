class TempatTinggal {
    protected int luas; // luas bangunan dalam meter persegi
    protected double hargaBahanBangunan; // harga per meter persegi

    // method
    public double hitungBiayaBangun() {
        return (double) luas * hargaBahanBangunan;
    }
}

class Rumah extends TempatTinggal {
    // constructor
    public Rumah(int luas, double hargaBahanBangunan) {
        this.luas = luas;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
    public Rumah(int lebarBangunan, int panjangBangunan, double hargaBahanBangunan){
        this.luas = lebarBangunan * panjangBangunan;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    // getter
    public int getLuas(){
        return this.luas;
    }
    public double getHargaBahanBangunan(){
        return this.hargaBahanBangunan;
    }

    // method
    public double hitungBiayaBangun() {
        return super.hitungBiayaBangun();
    }
    public double hitungBiayaBangun(double biayaOrmas) {
        return hitungBiayaBangun() + biayaOrmas;
    }
    public void setLuas(int luasBangunan) {
        this.luas = luasBangunan;
    }
    public void setLuas(int panjangBangunan, int lebarBangunan){
        this.luas = panjangBangunan * lebarBangunan;
    }
}

interface Kendaraan{
    public float hitungJarakTempuh();
}

class Karavan extends TempatTinggal implements Kendaraan{
    protected float bensin; //  jumlah bensin yang ada di tanki dalam satuan liter
    protected float pemakaianBensin; // jarak tempuh yang dapat dilakukan per liter
    
    // getter
    public int getLuas(){
        return this.luas;
    }
    public double getHargaBahanBangunan(){
        return this.hargaBahanBangunan;
    }
    public float getBensin(){
        return this.bensin;
    }
    public float getPemakaianBensin(){
        return this.pemakaianBensin;
    }

    // setter
    public void setLuas(int luas){
        this.luas = luas;
    }
    public void setHargaBahanBangunan(double hargaBahanBangunan){
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
    public void setBensin (float bensin){
        this.bensin = bensin;
    }
    public void setPemakaianBensin (float pemakaianBensin){
        this.pemakaianBensin = pemakaianBensin;
    }

    // method
    public double hitungBiayaBangun(){
        return super.hitungBiayaBangun()*3;
    }
    public float hitungJarakTempuh(){
        return this.bensin * this.pemakaianBensin;
    }
}
