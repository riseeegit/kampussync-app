package uts_muhrifki_13120240055;

public class Film {
   private String kode;
   private String judul;
   private String genre;
   private int durasi;
   private int harga;

   public String getkode() {
      return this.kode;
   }

   public void setkode(String kode) {
      this.kode = kode;
   }

   public String getjudul() {
      return this.judul;
   }

   public void setjudul(String judul) {
      this.judul = judul;
   }

   public String genre() {
      return this.genre;
   }

   public void setgenre(String genre) {
      this.genre = genre;
   }

   public int durasi() {
      return this.durasi;
   }

   public void setdurasi(int durasi) {
      this.durasi = durasi;
   }

   public int getharga() {
      return this.harga;
   }

   public void setharga(int harga) {
      this.harga = harga;
   }

   public Film(String kode, String judul, String genre, int durasi, int harga) {
      this.kode = kode;
      this.judul = judul;
      this.genre = genre;
      this.durasi = durasi;
      this.harga = harga;
   }

   public void tampilinfo() {
      System.out.println("  [" + this.kode + "] " + this.judul);
      System.out.println("   Genre : " + this.genre);
      System.out.println("  Durasi : " + this.durasi);
      System.out.println("   Harga : " + this.harga);
   }
}
