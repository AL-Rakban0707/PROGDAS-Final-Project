# PROGDAS-Final-Project

Kelas: 02  
Kelompok: 6  
SDG: 14 (Life Below Water)  
Judul:  Underwater Ecosystem and living condition checker  
Deskripsi: Program ini bertujuan untuk mendeteksi kualitas dan memprediksi kondisi ekosistem suatu perairan seperti sungai, danau, reservasi air minum, dan ternak lele dengan menganalisis data-data tertentu yaitu kadar PH, suhu, oksigen yang terlaut, konduktivitas listrik, kekeruhan air, dan juga warna air.

Dari hasil data yang diperoleh indikator-indikator tersebut, kita akan memasukkan semua data yang pada akhirnya menghasilkan nilai index air dan menaruh range nilai dengan level prioritas berbeda apabila diperlukan tindakan tertentu.

Anggota Kelompok:
1. Arafah Akbar Satria
2. Benianaus Kenneth Indarwan
3. Rakha Rabbani Ardaputra Laitsy - 2506601230

## In-Depth Description

Untuk program ini, kita menggunakan berbagai macam "Units of Measurements" dan juga parameter-parameter yang terbukti secara ilmiah untuk menentukan bagaimana kondisi dari sebuah perairan dan juga apakah perlu diberikan tindakan yang intensif atau tidak.

Satuan unit yang digunakan adalah:
- Level pH (Skala 0 - 14)
- Oxigen Terlarut (mg/L)
- Kekeruhan Air (Dalam NTU)
- Suhu (°C)
- Konduktivitas Listrik (µS/cm)
- Warna Air (Jernih, Coklat, Hijau, Hitam, dll.)

Bagi beberapa unit pengukuran disini, ada beberapa alasan kenapa mereka bisa terpilih. Pertama, seperti oxigen yang terlarut. Oxigen yang terlarut itu sangat penting bagi makhluk hidup air untuk hidup, mau itu untuk bernapas, makan, reproduksi dll. Dan juga untuk Konduktivitas Listrik, ia menandakan apakah kadar garam atau limbah sangat tinggi di perairan tersebut.

Kita juga menggunakan sistem notifikasi untuk menentukan level prioritas dari tiap data yang kita terima. Sistem tersebut berupa warna peringatan yaitu:

🟢 (Hijau) = Normal.
🟡 (Kuning)= Warning, perlu dimonitor lebih lanjut. 
🔴 (Merah) = Critical, perlu tindakan sesegera mungking (kontaminasi, meningkatkan angka kematian ikan, dll.)

Terakhir, program akan berjalan dengan alur "Looped Monitoring Sessions". Artinya, user akan memasukkan beberapa hasil data yang mereka dapatkan (contoh: sampel harian) dan melacak apakah kondisi dari perairan membaik atau memburuk. Kita juga memastikan untuk memiliki log history berupa file .txt agar setiap data disimpan tiap kali run.

## Referensi

- [1]United States Environmental Protection Agency. “PH.” Www.epa.gov, 4 Nov. 2015, www.epa.gov/caddis/ph. [Accessed: 14-05-2026]
 
- [2]Government of Northwest Territories. Dissolved Oxygen (DO). 2007. [Accessed: 14-05-2026]

- [3]Jaiswal, Kajal. “The Oxygen Factor: Why Dissolved Oxygen Is Vital.” LAB Worldwide, 4 Nov. 2025, www.lab-worldwide.com/importance-dissolved-oxygen-aquatic-life-a-0938b2a6af2d0dcfb2aa6a3bc4cd6106/. [Accessed: 14-05-2026]

- [4]United States Environmental Protection Agency. “Indicators: Conductivity.” US EPA, 29 May 2024, www.epa.gov/national-aquatic-resource-surveys/indicators-conductivity. [Accessed: 14-05-2026]

- [5]and, Forests. “Colours of Water & What They Reflect about Our Ecosystems.” Beforest.co, 4 Nov. 2023, beforest.co/blogs/colours-of-water-what-they-reflect-about-our-ecosystems/. [Accessed: 14-05-2026]

- [6]G. Walkuska and A. Wilczek, "Influence of Discharged Heated Water on Aquatic Ecosystem Fauna," Polish J. of Environ. Stud., vol. 19, no. 3, pp. 547-552, 2010. [Accessed: 14-05-2026]

- [7]Mansi Pansari. “Turbidity: Understanding Its Role in Water Quality - Palintest New.” Palintest New, 10 Jan. 2025, www.palintest.com/turbidity-understanding-its-role-in-water-quality/. [Accessed: 14-05-2026]

- [8]Chidiac, Sandra, et al. “A Comprehensive Review of Water Quality Indices (WQIs): History, Models, Attempts and Perspectives.” Reviews in Environmental Science and Bio/Technology, vol. 22, no. 2, 11 Mar. 2023, https://doi.org/10.1007/s11157-023-09650-7. [Accessed: 14-05-2026]

Indikator:
1. [1] pH ideal.
2. [6] Suhu ideal.
3. [2][3] Oksigen Terlarut.
4. [7] Kekeruhan air
5. [4] konduktivitas
6. [5] Warna air
7. [8] WQI

## Pembagian Tugas

1. Arafah Akbar Satria - Ecosystem, input

2. Benianaus Kenneth Indarwan - Evaluasi, report
 
3. Rakha Rabbani Ardaputra Laitsy - Type, main, polishing
