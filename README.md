# 🌈 RGB LED Controller v4.0

**Arduino controller untuk 2 LED RGB dengan 15+ mode animasi dinamis**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino](https://img.shields.io/badge/Arduino-IDE-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/en/software)
[![Version](https://img.shields.io/badge/Version-4.0-blue)]()

---

## 📋 Daftar Isi
- [Fitur](#-fitur)
- [Hardware](#-hardware)
- [Instalasi](#-instalasi)
- [Wiring](#-wiring)
- [Penggunaan](#-penggunaan)
- [Mode](#-mode)
- [Troubleshooting](#-troubleshooting)
- [Lisensi](#-lisensi)

---

## ✨ Fitur
- **15 mode animasi** (Rainbow, Breathing, Strobe, Police Lights, dll)
- **Kontrol serial** (mode manual/otomatis, navigasi, durasi)
- **Dual LED RGB** dengan PWM untuk kontrol warna halus
- **Common cathode** LED support

---

## 🛠️ Hardware
| Komponen | Jumlah | Keterangan |
|----------|--------|------------|
| Arduino | 1 | UNO/Nano/Mega |
| LED RGB | 2 | Common Cathode |
| Resistor | 6 | 220Ω (setiap channel) |
| Kabel jumper | 10+ | - |
| Breadboard | 1 | Opsional |

### 🔌 Pin Mapping
**LED 1:**
- Pin 3 → Red
- Pin 5 → Green  
- Pin 6 → Blue

**LED 2:**
- Pin 9 → Red
- Pin 10 → Green
- Pin 11 → Blue

---

## 📥 Instalasi
1. Hubungkan hardware sesuai wiring diagram
2. Download kode dari GitHub
3. Buka di Arduino IDE
4. Pilih board dan port yang sesuai
5. Upload ke Arduino

---

## 🔌 Wiring Diagram
```
ARDUINO → LED 1
Pin 3 ──[220Ω]── R
Pin 5 ──[220Ω]── G  
Pin 6 ──[220Ω]── B
GND ──────────── Common

ARDUINO → LED 2
Pin 9 ──[220Ω]── R
Pin 10 ─[220Ω]── G
Pin 11 ─[220Ω]── B
GND ──────────── Common
```

---

## 🎮 Penggunaan
### Mode Otomatis (Default)
- Berganti mode setiap 12 detik
- Mode 0-14 berputar otomatis

### Kontrol Serial (9600 baud)
```
0-9      : Pilih mode 0-14
N/n      : Mode berikutnya
P/p      : Mode sebelumnya  
A/a      : Toggle auto mode
O/o      : Matikan LED
I/i      : Tampilkan info
H/h      : Bantuan
D5000    : Set durasi 5 detik
```

---

## 🎬 Mode Animasi
1. **Gradient Rainbow** - Gradien pelangi halus
2. **Breathing Dual** - Efek napas warna berbeda
3. **Strobe Party** - Stroboskop warna-warni
4. **Color Chase** - Pergeseran warna berurutan
5. **Complementary Colors** - Warna berlawanan
6. **Police Lights** - Lampu polisi merah-biru
7. **Color Fade** - Transisi halus antar warna
8. **Fire Effect** - Simulasi api
9. **Soundwave** - Efek gelombang suara
10. **Rainbow Wave** - Gelombang pelangi
11. **Color Rotation** - Rotasi warna 360°
12. **Disco Mode** - Mode disko acak
13. **Pulse Mode** - Efek denyut
14. **Random Burst** - Ledakan warna acak
15. **Smooth Transition** - Transisi halus

---

## 🔧 Troubleshooting
| Masalah | Solusi |
|---------|--------|
| LED mati | Periksa koneksi GND dan resistor |
| Warna salah | Pastikan resistor sama (220Ω) |
| Serial error | Cek baud rate (9600) |
| Mode cepat/lambat | Atur durasi dengan `D` command |

---

## 📄 Lisensi
MIT License - lihat [LICENSE](LICENSE) untuk detail.

---
