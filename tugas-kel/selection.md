# Selection

tujuan: 
mencari elemen terkecil di array, lalu meletakan di paling depan array
setelah itu kecilkan array dan ulangi mencari elemen terkecil

1. loop ke semua array
2. cari elemen terkecil dalam array
3. mencarinya dengan memulai rekursif baru, dimulai dari i sampai akhir array
    i pertama kali dimulai dari 0
4. tentukan basis, jika index saat ini sudah mencapai akhir array
    selesai rekursif, bilangan terkecil ditemokan
5. bandingkan elemen index saat ini, dengan elemen terkecil
6. jika lebih kecil, letakan index elemen saat ini,  
    ke indexterkecil
7. tentukan rekuren, ulangi membandingkan element saat ini dengan index element terkecil, tapi dengan array yang lebih kecil
8. setelah variabel elemen terkecil ditemukan, letakkan di
    array paling depan
9. proses tersebut akan melakukan perulangan sampai akhir array
