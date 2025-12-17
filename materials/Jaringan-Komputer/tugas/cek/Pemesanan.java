package uts_muhrifki_13120240055;

import java.io.PrintStream;

public class Pemesanan {
   private String nomorpesan;
   private String namapesan;
   private int tiket;
   private String tanggal;
   Film f;
   Film f1 = new Film("F001", "Pengabdi Setan 1", "Horror", 119, 35000);
   Film f2 = new Film("F002", "Miracle in cell no. 7", "Drama", 145, 40000);
   Film f3 = new Film("F003", "The Avenger", "Action", 143, 50000);

   public Pemesanan(String nomorpesan, String namapesan) {
      this.nomorpesan = nomorpesan;
      this.namapesan = namapesan;
   }

   public String getnom() {
      return this.nomorpesan;
   }

   public void setnom(String nomorpesan) {
      this.nomorpesan = nomorpesan;
   }

   public String getnam() {
      return this.namapesan;
   }

   public void setnam(String namapesan) {
      this.namapesan = namapesan;
   }

   public int gettiket() {
      return this.tiket;
   }

   public void settiket(int tiket) {
      this.tiket = tiket;
   }

   public String gettgl() {
      return this.tanggal;
   }

   public void settgl(String tanggal) {
      this.tanggal = tanggal;
   }

   public int hitungtb(int tiket, int harga) {
      return tiket * harga;
   }

   public void tampilstruk(int film, int jumlah) {
      System.out.println("====================================");
      System.out.println("       STRUK PEMESANAN");
      System.out.println("=====================================");
      System.out.println("No. Pemesanan : " + this.getnom());
      System.out.println("Nama Pemesan  : " + this.getnam());
      System.out.println("Tanggal       : " + this.gettgl());
      if (film == 1) {
         this.f1.tampilinfo();
      } else if (film == 2) {
         this.f2.tampilinfo();
      } else if (film == 3) {
         this.f3.tampilinfo();
      }

      System.out.println("Jumlah Tiket:" + jumlah);
      System.out.println("--------------------------------------");
      PrintStream var10000;
      int var10001;
      if (film == 1) {
         var10000 = System.out;
         var10001 = this.hitungtb(jumlah, this.f1.getharga());
         var10000.println("TOTAL BAYAR : " + var10001);
      } else if (film == 2) {
         var10000 = System.out;
         var10001 = this.hitungtb(jumlah, this.f2.getharga());
         var10000.println("TOTAL BAYAR : " + var10001);
      } else if (film == 3) {
         var10000 = System.out;
         var10001 = this.hitungtb(jumlah, this.f3.getharga());
         var10000.println("TOTAL BAYAR : " + var10001);
      }

      System.out.println("=======================================");
      System.out.println("     Terima kasih atas pemesanan Anda!");
      System.out.println("========================================");
   }
}
