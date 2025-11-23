# Changelog

Semua perubahan penting pada proyek ini akan didokumentasikan di file ini.

## [4.0] - 2025-11-23

### Added
- 3 mode animasi baru (Pulse, Random Burst, Smooth Transition)
- Serial control system yang lengkap
- Command help dan info display
- Durasi mode dapat diubah via Serial
- Fungsi helper yang lebih baik
- Dokumentasi lengkap

### Changed
- Refactor struktur kode untuk readability lebih baik
- Pin configuration menjadi lebih jelas
- Optimisasi timeout checking
- Mode switching lebih responsif

### Fixed
- Bug pada timing control
- Mode timeout yang lebih akurat
- Warna transition yang lebih smooth

### Improved
- Serial communication responsiveness
- Power efficiency
- Code organization

---

## [3.0] - 2024-13-6

### Added
- 12 mode animasi utama
- Basic PWM control
- HSL to RGB conversion

---

## [2.0] - 2024-4-15

### Added
- Dual LED support
- Basic color presets

---

## [1.0] - 2024-1-18

### Added
- Initial release
- Single LED control

---
```

---

## 🎨 .gitignore
```
# IDE
.vscode/
.idea/
*.swp
*.swo
*~

# Arduino
*.o
*.a
*.so
build/
dist/

# OS
.DS_Store
Thumbs.db
*.exe

# Temporary
*.tmp
*.log
*.bak

# Python
__pycache__/
*.py[cod]
*$py.class

# Dependencies
node_modules/
```

---

## 📝 Struktur File untuk GitHub

Buat folder struktur seperti ini di repository:
```
RGB-LED-Controller/
├── RGB_LED_Controller_v4.0.ino
├── README.md
├── LICENSE
├── CHANGELOG.md
├── CONTRIBUTING.md
