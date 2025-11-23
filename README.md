# 🌈 RGB LED Controller v4.0

**An advanced, feature-rich Arduino RGB LED controller with 15+ dynamic animation modes**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino](https://img.shields.io/badge/Arduino-IDE-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/en/software)
[![Status](https://img.shields.io/badge/Status-Active-brightgreen)]()
[![Version](https://img.shields.io/badge/Version-4.0-blue)]()

---

## 📖 Daftar Isi

- [Fitur Utama](#-fitur-utama)
- [Hardware yang Dibutuhkan](#-hardware-yang-dibutuhkan)
- [Instalasi](#-instalasi)
- [Wiring Diagram](#-wiring-diagram)
- [Cara Penggunaan](#-cara-penggunaan)
- [Perintah Serial](#-perintah-serial)
- [Mode Animasi](#-mode-animasi)
- [Konfigurasi](#-konfigurasi)
- [Troubleshooting](#-troubleshooting)
- [Lisensi](#-lisensi)
- [Kontribusi](#-kontribusi)

---

## ✨ Fitur Utama

### 🎬 15+ Mode Animasi Dinamis
- **Gradient Rainbow** - Gradien warna pelangi yang mulus
- **Breathing Dual** - Efek pernapasan pada dua LED
- **Strobe Party** - Efek stroboskop warna-warni
- **Color Chase** - Pergeseran warna berurutan
- **Complementary Colors** - Warna komplementer yang saling berlawanan
- **Police Lights** - Simulasi lampu polisi merah-biru
- **Color Fade** - Transisi warna yang halus
- **Fire Effect** - Simulasi api yang bergoyang
- **Soundwave Effect** - Efek gelombang suara
- **Rainbow Wave** - Gelombang pelangi yang dinamis
- **Color Rotation** - Rotasi warna 360°
- **Disco Mode** - Mode disko dengan stroboskop acak
- **Pulse Mode** - Efek denyut nadi warna
- **Random Color Burst** - Ledakan warna acak
- **Smooth Transition** - Transisi halus antar warna

### 🎮 Kontrol Serial
- Pilih mode manual dengan tombol (0-9)
- Navigasi mode dengan perintah N/P
- Toggle mode otomatis dengan A
- Atur durasi mode dengan D
- Support full serial communication

### ⚙️ Pengaturan Fleksibel
- Durasi mode dapat disesuaikan
- Mode otomatis atau manual
- Konfigurasi durasi via Serial
- Seed randomization untuk variasi

---

## 🛠️ Hardware yang Dibutuhkan

| Komponen | Jumlah | Spesifikasi |
|----------|--------|------------|
| Arduino | 1 | UNO, Nano, atau Mega |
| LED RGB | 2 | Common Cathode (Katoda Bersama) |
| Resistor | 6 | 220Ω - 1kΩ (untuk setiap pin) |
| Breadboard | 1 | Optional, untuk prototyping |
| Jumper Wire | 10+ | Male-to-Male atau sesuai kebutuhan |
| USB Cable | 1 | Untuk programming & power |
| Power Supply | 1 | 5V DC (dari USB atau eksternal) |

### 📦 Rincian PIN Arduino

**LED 1 (Pin Digital PWM):**
- Pin 3 → Red (R)
- Pin 5 → Green (G)
- Pin 6 → Blue (B)

**LED 2 (Pin Digital PWM):**
- Pin 9 → Red (R)
- Pin 10 → Green (G)
- Pin 11 → Blue (B)

> ⚠️ Gunakan PIN PWM (3, 5, 6, 9, 10, 11) untuk Arduino UNO/Nano

---

## 🔌 Wiring Diagram

### Skema Koneksi (ASCII)
```
┌─────────────────────────────────────────────────────────────┐
│                     ARDUINO UNO/NANO                        │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────────────────────────────────────────┐    │
│  │              LED RGB 1 (Common Cathode)             │    │
│  │                                                     │    │
│  │    Pin 3 (PWM) ─── [220Ω] ──→ R (Red)               │    │
│  │    Pin 5 (PWM) ─── [220Ω] ──→ G (Green)             │    │
│  │    Pin 6 (PWM) ─── [220Ω] ──→ B (Blue)              │    │
│  │                                                     │    │
│  │    GND (Cathode) ─────────────→ Common (Katoda)     │    │
│  └─────────────────────────────────────────────────────┘   │# 🌈 RGB LED Controller v4.0

**An advanced, feature-rich Arduino RGB LED controller with 15+ dynamic animation modes**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino](https://img.shields.io/badge/Arduino-IDE-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/en/software)
[![Status](https://img.shields.io/badge/Status-Active-brightgreen)]()
[![Version](https://img.shields.io/badge/Version-4.0-blue)]()

---

## 📖 Daftar Isi

- [Fitur Utama](#-fitur-utama)
- [Hardware yang Dibutuhkan](#-hardware-yang-dibutuhkan)
- [Instalasi](#-instalasi)
- [Wiring Diagram](#-wiring-diagram)
- [Cara Penggunaan](#-cara-penggunaan)
- [Perintah Serial](#-perintah-serial)
- [Mode Animasi](#-mode-animasi)
- [Konfigurasi](#-konfigurasi)
- [Troubleshooting](#-troubleshooting)
- [Lisensi](#-lisensi)
- [Kontribusi](#-kontribusi)

---

## ✨ Fitur Utama

### 🎬 15+ Mode Animasi Dinamis
- **Gradient Rainbow** - Gradien warna pelangi yang mulus
- **Breathing Dual** - Efek pernapasan pada dua LED
- **Strobe Party** - Efek stroboskop warna-warni
- **Color Chase** - Pergeseran warna berurutan
- **Complementary Colors** - Warna komplementer yang saling berlawanan
- **Police Lights** - Simulasi lampu polisi merah-biru
- **Color Fade** - Transisi warna yang halus
- **Fire Effect** - Simulasi api yang bergoyang
- **Soundwave Effect** - Efek gelombang suara
- **Rainbow Wave** - Gelombang pelangi yang dinamis
- **Color Rotation** - Rotasi warna 360°
- **Disco Mode** - Mode disko dengan stroboskop acak
- **Pulse Mode** - Efek denyut nadi warna
- **Random Color Burst** - Ledakan warna acak
- **Smooth Transition** - Transisi halus antar warna

### 🎮 Kontrol Serial
- Pilih mode manual dengan tombol (0-9)
- Navigasi mode dengan perintah N/P
- Toggle mode otomatis dengan A
- Atur durasi mode dengan D
- Support full serial communication

### ⚙️ Pengaturan Fleksibel
- Durasi mode dapat disesuaikan
- Mode otomatis atau manual
- Konfigurasi durasi via Serial
- Seed randomization untuk variasi

---

## 🛠️ Hardware yang Dibutuhkan

| Komponen | Jumlah | Spesifikasi |
|----------|--------|------------|
| Arduino | 1 | UNO, Nano, atau Mega |
| LED RGB | 2 | Common Cathode (Katoda Bersama) |
| Resistor | 6 | 220Ω - 1kΩ (untuk setiap pin) |
| Breadboard | 1 | Optional, untuk prototyping |
| Jumper Wire | 10+ | Male-to-Male atau sesuai kebutuhan |
| USB Cable | 1 | Untuk programming & power |
| Power Supply | 1 | 5V DC (dari USB atau eksternal) |

### 📦 Rincian PIN Arduino

**LED 1 (Pin Digital PWM):**
- Pin 3 → Red (R)
- Pin 5 → Green (G)
- Pin 6 → Blue (B)

**LED 2 (Pin Digital PWM):**
- Pin 9 → Red (R)
- Pin 10 → Green (G)
- Pin 11 → Blue (B)

> ⚠️ Gunakan PIN PWM (3, 5, 6, 9, 10, 11) untuk Arduino UNO/Nano

---

## 🔌 Wiring Diagram

### Skema Koneksi (ASCII)
```
┌─────────────────────────────────────────────────────────────┐
│                     ARDUINO UNO/NANO                        │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────────────────────────────────────────┐   │
│  │              LED RGB 1 (Common Cathode)             │   │
│  │                                                     │   │
│  │    Pin 3 (PWM) ─── [220Ω] ──→ R (Red)               │   │
│  │    Pin 5 (PWM) ─── [220Ω] ──→ G (Green)             │   │
│  │    Pin 6 (PWM) ─── [220Ω] ──→ B (Blue)              │   │
│  │                                                     │   │
│  │    GND (Cathode) ─────────────→ Common (Katoda)     │   │
│  └─────────────────────────────────────────────────────┘   │
│                                                            │
│  ┌─────────────────────────────────────────────────────┐   │
│  │              LED RGB 2 (Common Cathode)             │   │
│  │                                                     │   │
│  │    Pin 9 (PWM) ─── [220Ω] ──→ R (Red)               │   │
│  │    Pin 10 (PWM) ─── [220Ω] ──→ G (Green)            │   │
│  │    Pin 11 (PWM) ─── [220Ω] ──→ B (Blue)             │   │
│  │                                                     │   │
│  │    GND (Cathode) ─────────────→ Common (Katoda)     │   │
│  └─────────────────────────────────────────────────────┘   │
│                                                             │
└─────────────────────────────────────────────────────────────┘

GND ARDUINO ──── GND BreadBoard ──── Katoda LED 1 dan LED 2
```

### Diagram Visual Wiring
```
ARDUINO UNO
┌───────────────────┐
│ 3V3  GND  5V IOREF│
│ A0   A1   A2  A3  │
│ 0    1    2   3●──┼──[220Ω]──LED1_R
│ 4    5●──┼──[220Ω]──LED1_G
│ 6●──┼──[220Ω]──LED1_B
│ 7    8    9●──┼──[220Ω]──LED2_R
│ 10●──┼──[220Ω]──LED2_G
│ 11●──┼──[220Ω]──LED2_B
│ 12   13   GND●─┐
│ AREF RST   ┘  │
└───────────────────┘   │
                        │
         ┌──────────────┘
         │
    ┌────┴───┐
    │ RGB LED│
    │  1&2   │
    │  GND───┼── (Common Cathode)
    └────────┘
```

### Tabel Pin Mapping

| LED | Channel | Arduino Pin | Warna |
|-----|---------|-------------|-------|
| LED 1 | 1 | 3 (PWM) | Red |
| LED 1 | 2 | 5 (PWM) | Green |
| LED 1 | 3 | 6 (PWM) | Blue |
| LED 2 | 1 | 9 (PWM) | Red |
| LED 2 | 2 | 10 (PWM) | Green |
| LED 2 | 3 | 11 (PWM) | Blue |
| GND | - | GND | Common Ground |

---

## 📥 Instalasi

### 1️⃣ Persiapan Hardware

1. Hubungkan Arduino ke komputer dengan USB cable
2. Pasang LED RGB 1 dan 2 ke breadboard
3. Hubungkan resistor 220Ω untuk setiap pin LED (R, G, B)
4. Koneksikan pin Arduino sesuai diagram di atas
5. Pastikan semua GND terhubung dengan baik

### 2️⃣ Download dan Setup Kode
```bash
# Clone repository
git clone https://github.com/username/RGB-LED-Controller.git
cd RGB-LED-Controller

# Atau download ZIP langsung dari GitHub
```

### 3️⃣ Upload ke Arduino

1. Buka Arduino IDE
2. File → Open → `RGB_LED_Controller_v4.0.ino`
3. Pilih Board: Tools → Board → Arduino UNO (atau sesuai board Anda)
4. Pilih Port: Tools → Port → COM3 (atau sesuai port Anda)
5. Klik tombol Upload ⬆️
6. Tunggu upload selesai (sekitar 10 detik)

### 4️⃣ Verifikasi Instalasi

1. Buka Serial Monitor: Tools → Serial Monitor
2. Set Baud Rate ke **9600**
3. Tekan tombol RESET di Arduino
4. Seharusnya muncul pesan welcome
5. Ketik `H` untuk melihat daftar perintah

---

## 🎮 Cara Penggunaan

### Mode Otomatis

Secara default, controller berjalan dalam **mode otomatis**:
- LED akan berpindah ke mode berikutnya setiap 12 detik
- Mode akan bergilir dari 0 hingga 14

### Mode Manual via Serial

Buka Serial Monitor dan gunakan perintah berikut:

| Perintah | Fungsi |
|----------|--------|
| `0-9` | Pilih mode (0-14) |
| `N` | Mode berikutnya |
| `P` | Mode sebelumnya |
| `A` | Toggle mode otomatis |
| `O` | Matikan semua LED |
| `I` | Tampilkan info |
| `H` | Tampilkan bantuan |
| `D2000` | Set durasi 2000ms |

### Contoh Penggunaan
```
> 5        # Masuk ke Police Lights mode
Mode set to: 5

> N        # Ke mode berikutnya
Next mode: 6

> A        # Nonaktifkan auto mode
Auto mode: OFF

> D5000    # Set durasi 5 detik per mode
Mode duration set to: 5000 ms

> I        # Lihat info
Current Mode: 6
Auto Mode: OFF
Mode Duration: 5000 ms
```

---

## 📡 Perintah Serial

### Input Perintah
```cpp
// Format Serial Monitor
9600 Baud Rate

// Tipe Perintah
Single Char:  H, N, P, A, O, I
Number (0-14): 0, 1, 2, ..., 14
With Param:    D5000 (set duration ke 5000ms)
```

### Daftar Lengkap Perintah

#### Navigasi Mode
- **`0` - `9`** : Langsung ke mode 0-9
- **`N` / `n`** : Mode berikutnya (next)
- **`P` / `p`** : Mode sebelumnya (previous)

#### Kontrol
- **`A` / `a`** : Toggle mode otomatis
- **`O` / `o`** : Matikan semua LED (all off)

#### Informasi
- **`I` / `i`** : Tampilkan info mode saat ini
- **`H` / `h`** : Tampilkan bantuan perintah

#### Pengaturan
- **`D` / `d`** : Set durasi mode (diikuti angka)
  - Contoh: `D3000` (3000 milliseconds)
  - Contoh: `D12000` (12 detik)

---

## 🎬 Mode Animasi

### Mode 0: Gradient Rainbow
Gradien pelangi yang mulus dari satu LED ke LED lainnya dengan transisi 180° dari spektrum warna.

**Karakteristik:**
- Warna bergerak halus
- LED 1 dan 2 berlawanan 180°
- Durasi: 12 detik (default)

---

### Mode 1: Breathing Dual
Efek pernapasan pada dua LED dengan warna berbeda secara bergantian.

**Karakteristik:**
- LED 1: Merah → Hijau
- LED 2: Cyan → Magenta
- Durasi setiap warna: ~2 detik

---

### Mode 2: Strobe Party
Efek stroboskop dengan warna yang berubah-ubah.

**Warna:** Putih, Merah, Hijau, Biru, Kuning
**Flash Rate:** 70ms ON / 70ms OFF

---

### Mode 3: Color Chase
Warna bergeser dari satu ke lainnya secara berurutan.

**Karakteristik:**
- 6 warna utama
- LED 1 → LED 2 → OFF
- Durasi per warna: 250ms

---

### Mode 4: Complementary Colors
Menampilkan pasangan warna komplementer (berlawanan di color wheel).

**Pasangan:**
- Merah ↔ Cyan
- Hijau ↔ Magenta
- Biru ↔ Kuning

---

### Mode 5: Police Lights
Simulasi lampu polisi dengan merah dan biru berselang-seling.

**Karakteristik:**
- Red ↔ Blue alternating
- Flash rate: 150ms
- Delay: 500ms per cycle

---

### Mode 6: Color Fade
Transisi halus antar semua warna dengan urutan melingkar.

**Karakteristik:**
- LED 1: Warna A → Warna B
- LED 2: Warna B → Warna A
- Transisi smooth 35ms per step

---

### Mode 7: Fire Effect
Simulasi efek api yang bergerak.

**Karakteristik:**
- Warna: Oranye dengan variasi kuning
- 4 flames per cycle
- Durasi per flame: ~400ms

---

### Mode 8: Soundwave Effect
Efek gelombang suara dengan intensitas yang berubah.

**Karakteristik:**
- 5 warna gelombang
- Intensity ramp: 50 → 255 → 50
- LED 1 dan 2 bergeser warna

---

### Mode 9: Rainbow Wave
Gelombang pelangi yang dinamis dengan fase berbeda.

**Karakteristik:**
- Hue rotation 120° antar LED
- 3 cycle per mode
- Durasi: 50ms per step

---

### Mode 10: Color Rotation
Rotasi warna 360° dengan efek invers pada LED 2.

**Karakteristik:**
- Warna berputar
- LED 2: Inverse RGB dari LED 1
- 2 rotasi per mode

---

### Mode 11: Disco Mode
Mode disko dengan kombinasi cycle, blink, dan strobe acak.

**Urutan:**
1. Color cycling (14 step)
2. White blinking (5x)
3. Random color strobe (8x)

---

### Mode 12: Pulse Mode
Efek denyut nadi dengan color cycling.

**Karakteristik:**
- Gradual brighten (0 → 255)
- Gradual dim (255 → 0)
- Warna berganti setiap pulse

---

### Mode 13: Random Color Burst
Ledakan warna acak dengan fade out.

**Karakteristik:**
- Random bright colors
- 200ms ON
- Fade out 250ms

---

### Mode 14: Smooth Transition
Transisi halus antar warna tanpa efek lain.

**Karakteristik:**
- Perpanjangan transisi (150 step)
- Durasi smooth: ~5 detik
- LED 1 ↔ LED 2 cross fade

---

## ⚙️ Konfigurasi

### Mengubah Durasi Mode

Edit di bagian `setup()`:
```cpp
const int modeDuration = 12000;  // dalam milliseconds
```

Contoh:
- `5000` = 5 detik
- `10000` = 10 detik
- `20000` = 20 detik

### Mengubah Pin Arduino

Edit di bagian `PIN CONFIGURATION`:
```cpp
const int LED1_R = 3;   // Ubah sesuai pin yang tersedia
const int LED1_G = 5;
const int LED1_B = 6;

const int LED2_R = 9;
const int LED2_G = 10;
const int LED2_B = 11;
```

### Menambah Mode Baru

1. Buat fungsi mode baru:
```cpp
void myNewMode() {
  unsigned long startTime = millis();
  
  while(!checkModeTimeout(startTime)) {
    // Kode animasi Anda
    delay(30);
  }
}
```

2. Tambah ke `executeMode()`:
```cpp
case 15:
  myNewMode();
  break;
```

3. Ubah `const int totalModes = 16;`

### Menambah Warna Preset

Edit array `colors[]`:
```cpp
const int colors[][3] = {
  {255, 0, 0},       // Merah
  {0, 255, 0},       // Hijau
  {0, 0, 255},       // Biru
  // ... tambah warna baru di sini
};
const int totalColors = 10;  // ubah jumlahnya
```

---

## 🔧 Troubleshooting

### ❌ LED Tidak Menyala

**Solusi:**
1. Periksa koneksi USB dan power
2. Verifikasi wiring ke pin Arduino
3. Pastikan resistor terpasang dengan benar
4. Cek apakah LED ada yang rusak (test dengan multimeter)
5. Upload ulang kode

### ❌ Warna Tidak Sesuai

**Solusi:**
1. Periksa resistor setiap channel (R, G, B)
2. Jika resistor nilai berbeda, warna akan bergeser
3. Ganti resistor dengan nilai yang sama (220Ω)

### ❌ Serial Monitor Tidak Terbaca

**Solusi:**
1. Periksa COM port di Device Manager
2. Pastikan Baud Rate = 9600
3. Reset Arduino dengan tombol RESET
4. Coba buka Serial Monitor lagi

### ❌ Mode Berubah Cepat / Lambat

**Solusi:**
1. Gunakan perintah `D` untuk set durasi
2. Contoh: `D15000` untuk 15 detik
3. Edit `const int modeDuration` di kode

### ❌ LED Kedua Tidak Berfungsi

**Solusi:**
1. Test secara terpisah dengan kode sederhana
2. Periksa pin 9, 10, 11 apakah sudah PWM
3. Verifikasi koneksi GND/Katoda

### ⚡ Reset Arduino Terus-menerus

**Solusi:**
1. Kemungkinan ada short circuit
2. Periksa kembali wiring diagram
3. Gunakan power supply yang stabil
4. Pastikan tidak ada jumper yang menyentuh GND tanpa sengaja

---

## 📁 Struktur File Repository
```
RGB-LED-Controller/
├── RGB_LED_Controller_v4.0.ino     # Main code
├── README.md                        # Dokumentasi ini
├── LICENSE                          # MIT License
├── CONTRIBUTING.md                  # Panduan kontribusi
├── CHANGELOG.md                     # History perubahan
├── docs/
│   ├── WIRING_DIAGRAM.md           # Diagram wiring detail
│   ├── SERIAL_COMMANDS.md          # Referensi perintah
│   ├── MODE_GUIDE.md               # Panduan setiap mode
│   └── TROUBLESHOOTING.md          # Bantuan masalah
├── examples/
│   ├── Basic_Example.ino           # Contoh dasar
│   ├── Custom_Colors.ino           # Contoh warna custom
│   └── Custom_Mode.ino             # Contoh mode custom
├── images/
│   ├── wiring_diagram.png          # Gambar wiring
│   ├── serial_monitor.png          # Screenshot serial
│   └── led_setup.jpg               # Foto setup
└── .gitignore                      # Git ignore file
```

---

## 📊 Spesifikasi Teknis

| Parameter | Nilai |
|-----------|-------|
| Baud Rate | 9600 |
| PWM Frequency | ~490 Hz (Arduino UNO) |
| Color Depth | 8-bit per channel (0-255) |
| Total Colors | 16.7 Million (256³) |
| Modes | 15 buah |
| Update Rate | ~30-50ms per frame |
| Power Consumption | ~100-200mA (max) |

---

## 💡 Tips & Trik

### 1. Resistor yang Tepat
- Gunakan 220Ω untuk LED standar 20mA
- Gunakan 470Ω jika LED terlalu terang
- Gunakan 100Ω untuk LED dengan arus rendah

### 2. Kualitas Warna
- Resistor berbeda → warna tidak sesuai
- Gunakan jenis dan nilai resistor yang sama
- Kalibrasi bisa dilakukan di kode dengan map()

### 3. Hemat Daya
- Kurangi brightness dengan modifikasi PWM value
- Gunakan power supply yang sesuai
- Hindari mode dengan brightness maksimal berkelanjutan

### 4. Custom Mode
- Kombinasikan fungsi yang ada
- Gunakan hslToRgb() untuk manipulasi warna
- Manfaatkan delay() untuk timing kontrol

---

## 🤝 Kontribusi

Kami menerima kontribusi dari siapa saja! Silakan:

1. Fork repository
2. Buat branch feature: `git checkout -b feature/AmazingFeature`
3. Commit changes: `git commit -m 'Add some AmazingFeature'`
4. Push ke branch: `git push origin feature/AmazingFeature`
5. Buat Pull Request

Baca [CONTRIBUTING.md](CONTRIBUTING.md) untuk detail lebih lanjut.

---

## 📝 Lisensi

Proyek ini dilisensikan di bawah **MIT License**. Lihat file [LICENSE](LICENSE) untuk detail lengkap.

---

## 📧 Kontak & Dukungan

- **Issues** : [GitHub Issues](https://github.com/username/RGB-LED-Controller/issues)
- **Discussions** : [GitHub Discussions](https://github.com/username/RGB-LED-Controller/discussions)
- **Email** : your.email@example.com

---

## 🙏 Terima Kasih

Terima kasih kepada:
- Arduino Community
- Kontributor GitHub
- Pengguna yang memberikan feedback

---

## 📚 Referensi & Resources

- [Arduino PWM](https://www.arduino.cc/en/tutorial/pwm)
- [RGB LED Color Mixing](https://learn.adafruit.com/adafruit-neopixel-uberguide/the-magic-of-rgb)
- [HSL to RGB Conversion](https://en.wikipedia.org/wiki/HSL_and_HSV)
- [Arduino Serial Communication](https://www.arduino.cc/en/reference/serial)

---

**Last Updated:** November 2025  
**Version:** 4.0  
**Status:** ✅ Active & Maintained

⭐ Jika proyek ini bermanfaat, berikan bintang di GitHub!
```
