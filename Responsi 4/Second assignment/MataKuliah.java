import java.lang.Comparable;

import org.w3c.dom.html.HTMLIsIndexElement;

class MataKuliah implements Comparable<MataKuliah> {
  private float rating;
  private String nama;
  private int kodeJurusan;
  private int tahunPengambilan;

  // constructor
  public MataKuliah(String nama, int kodeJurusan, int tahunPengambilan, float rating) {
    this.nama = nama;
    this.kodeJurusan = kodeJurusan;
    this.tahunPengambilan = tahunPengambilan;
    this.rating = rating;
  }

  // getter
  public String getNama(){
    return this.nama;
  }
  public int getKodeJurusan(){
    return this.kodeJurusan;
  }
  public int getTahunPengambilan(){
    return this.tahunPengambilan;
  }
  public float getRating(){
    return this.rating;
  }

  public int compareTo(MataKuliah m) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    if (this.rating == m.getRating() && this.tahunPengambilan == m.getTahunPengambilan() && this.kodeJurusan == m.getKodeJurusan()) {
      return 0;
    } else if (this.kodeJurusan < m.getKodeJurusan() || ((this.kodeJurusan == m.getKodeJurusan()) && (this.tahunPengambilan < m.getTahunPengambilan())) || ((this.kodeJurusan == m.getKodeJurusan()) && (this.tahunPengambilan == m.getTahunPengambilan()) && (this.rating < m.rating))) {
      return -1;
    } else {
      return 1;
    }
  }
}