// ========================================
// LED RGB COMMON CATHODE - FULL ENHANCED v4.0 FIX
// Bug Fixed & Optimized Version
// ========================================

// Pin deklarasi
const int led1[] = {3, 5, 6};    // R, G, B LED 1
const int led2[] = {9, 10, 11};  // R, G, B LED 2

// Variabel mode
int currentMode = 0;
const int totalModes = 15;
unsigned long lastModeChange = 0;
const int modeDuration = 12000; 

// Warna-warna preset
const int colors[][3] = {
  {255, 0, 0},     // Merah
  {0, 255, 0},     // Hijau
  {0, 0, 255},     // Biru
  {255, 255, 0},   // Kuning
  {255, 0, 255},   // Magenta
  {0, 255, 255},   // Cyan
  {255, 255, 255}, // Putih
  {255, 165, 0}    // Orange
};

// ========== SETUP & LOOP ==========
void setup() {
  for(int i = 0; i < 3; i++) {
    pinMode(led1[i], OUTPUT);
    pinMode(led2[i], OUTPUT);
  }
  
  Serial.begin(9600);
  delay(100);
  Serial.println("\n=== LED RGB Enhanced v4.0 ===");
  Serial.println("All Modes Bug Fixed Haris Sfx`");
  Serial.println("============================\n");
  randomSeed(analogRead(A0));
  allOff(); 
  delay(500);
}

void loop() {
  if(millis() - lastModeChange > modeDuration) {
    currentMode = (currentMode + 1) % totalModes;
    lastModeChange = millis();
    
    allOff();
    delay(100);
    
    Serial.print("Mode: ");
    Serial.println(currentMode);
  }

  switch(currentMode) {
    case 0:
      gradientRainbow();
      break;
    case 1:
      breathingDual();
      break;
    case 2:
      stroboParty();
      break;
    case 3:
      colorChase();
      break;
    case 4:
      complementaryColors();
      break;
    case 5:
      policeLights();
      break;
    case 6:
      colorFade();
      break;
    case 7:
      randomTwinkle();
      break;
    case 8:
      fireEffect();
      break;
    case 9:
      soundwaveEffect();
      break;
    case 10:
      pulseSync();
      break;
    case 11:
      rainbowWave();
      break;
    case 12:
      matrixRain();
      break;
    case 13:
      colorRotation();
      break;
    case 14:
      discoMode();
      break;
  }
}

// ========== FUNGSI DASAR ==========
void setLEDColor(const int led[], int r, int g, int b) {
  r = constrain(r, 0, 255);
  g = constrain(g, 0, 255);
  b = constrain(b, 0, 255);
  analogWrite(led[0], r);
  analogWrite(led[1], g);
  analogWrite(led[2], b);
}

void allOff() {
  setLEDColor(led1, 0, 0, 0);
  setLEDColor(led2, 0, 0, 0);
}

void smoothFade(const int led[], const int fromR, const int fromG, const int fromB,
                const int toR, const int toG, const int toB, int steps, int delayMs) {
  for(int step = 0; step <= steps; step++) {
    if(millis() - lastModeChange > modeDuration - 500) return;
    
    int r = map(step, 0, steps, fromR, toR);
    int g = map(step, 0, steps, fromG, toG);
    int b = map(step, 0, steps, fromB, toB);
    setLEDColor(led, r, g, b);
    delay(delayMs);
  }
}

void gradientRainbow() {
  static int hue = 0;
  unsigned long startTime = millis();
  
  while(millis() - startTime < modeDuration - 500) {
    for(int i = 0; i < 180; i += 4) {
      if(millis() - startTime > modeDuration - 500) return; 
      
      int hue1 = (hue + i) % 360;
      int hue2 = (hue1 + 180) % 360;
      
      int r1, g1, b1, r2, g2, b2;
      hslToRgb(hue1, 1.0, 0.5, r1, g1, b1);
      hslToRgb(hue2, 1.0, 0.5, r2, g2, b2);
      
      setLEDColor(led1, r1, g1, b1);
      setLEDColor(led2, r2, g2, b2);
      delay(30);
    }
    hue = (hue + 30) % 360;
  }
}

void breathingDual() {
  unsigned long startTime = millis();
  
  while(millis() - startTime < modeDuration - 500) {

    for(int i = 0; i <= 255; i += 5) {
      if(millis() - startTime > modeDuration - 500) return;
      setLEDColor(led1, i, 0, 0);
      setLEDColor(led2, 0, i, i);
      delay(6);
    }
    delay(200);
    
    for(int i = 255; i >= 0; i -= 5) {
      if(millis() - startTime > modeDuration - 500) return;
      setLEDColor(led1, i, 0, 0);
      setLEDColor(led2, 0, i, i);
      delay(6);
    }
    delay(200);
    
    for(int i = 0; i <= 255; i += 5) {
      if(millis() - startTime > modeDuration - 500) return;
      setLEDColor(led1, 0, i, 0);
      setLEDColor(led2, i, 0, i);
      delay(6);
    }
    delay(200);
    
    for(int i = 255; i >= 0; i -= 5) {
      if(millis() - startTime > modeDuration - 500) return;
      setLEDColor(led1, 0, i, 0);
      setLEDColor(led2, i, 0, i);
      delay(6);
    }
    delay(200);
  }
}

void stroboParty() {
  unsigned long startTime = millis();
  
  const int stroboColors[][3] = {
    {255, 255, 255},
    {255, 0, 0},
    {0, 255, 0},
    {0, 0, 255},
    {255, 255, 0}
  };
  
  while(millis() - startTime < modeDuration - 500) {
    for(int color = 0; color < 5; color++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int flash = 0; flash < 6; flash++) {
        setLEDColor(led1, stroboColors[color][0], stroboColors[color][1], stroboColors[color][2]);
        setLEDColor(led2, stroboColors[color][0], stroboColors[color][1], stroboColors[color][2]);
        delay(70);
        
        allOff();
        delay(70);
      }
      delay(250);
    }
  }
}

void colorChase() {
  unsigned long startTime = millis();
  
  const int chaseColors[][3] = {
    {255, 0, 0},
    {0, 255, 0},
    {0, 0, 255},
    {255, 255, 0},
    {255, 0, 255},
    {0, 255, 255}
  };
  
  while(millis() - startTime < modeDuration - 500) {
    for(int cycle = 0; cycle < 2; cycle++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int i = 0; i < 6; i++) {
        setLEDColor(led1, chaseColors[i][0], chaseColors[i][1], chaseColors[i][2]);
        delay(250);
        
        setLEDColor(led2, chaseColors[i][0], chaseColors[i][1], chaseColors[i][2]);
        delay(250);
        
        allOff();
        delay(100);
      }
    }
  }
}

void complementaryColors() {
  unsigned long startTime = millis();
  
  const int compPairs[][2][3] = {
    {{255, 0, 0}, {0, 255, 255}},
    {{0, 255, 0}, {255, 0, 255}},
    {{0, 0, 255}, {255, 255, 0}},
    {{255, 128, 0}, {0, 128, 255}},
    {{255, 0, 128}, {0, 255, 128}}
  };
  
  while(millis() - startTime < modeDuration - 500) {
    for(int pair = 0; pair < 5; pair++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      setLEDColor(led1, compPairs[pair][0][0], compPairs[pair][0][1], compPairs[pair][0][2]);
      setLEDColor(led2, compPairs[pair][1][0], compPairs[pair][1][1], compPairs[pair][1][2]);
      delay(1200);
    }
  }
}

void policeLights() {
  unsigned long startTime = millis();
  
  while(millis() - startTime < modeDuration - 500) {
    for(int cycle = 0; cycle < 10; cycle++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int flash = 0; flash < 4; flash++) {
        setLEDColor(led1, 255, 0, 0);
        setLEDColor(led2, 0, 0, 255);
        delay(150);
        
        setLEDColor(led1, 0, 0, 255);
        setLEDColor(led2, 255, 0, 0);
        delay(150);
      }
      allOff();
      delay(500);
    }
  }
}

void colorFade() {
  unsigned long startTime = millis();
  
  while(millis() - startTime < modeDuration - 500) {
    for(int fromColor = 0; fromColor < 8; fromColor++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      int toColor = (fromColor + 1) % 8;
      
      for(int step = 0; step <= 100; step += 2) {
        int r1 = map(step, 0, 100, colors[fromColor][0], colors[toColor][0]);
        int g1 = map(step, 0, 100, colors[fromColor][1], colors[toColor][1]);
        int b1 = map(step, 0, 100, colors[fromColor][2], colors[toColor][2]);
        
        int r2 = map(step, 0, 100, colors[toColor][0], colors[fromColor][0]);
        int g2 = map(step, 0, 100, colors[toColor][1], colors[fromColor][1]);
        int b2 = map(step, 0, 100, colors[toColor][2], colors[fromColor][2]);
        
        setLEDColor(led1, r1, g1, b1);
        setLEDColor(led2, r2, g2, b2);
        delay(35);
      }
    }
  }
}

void randomTwinkle() {
  unsigned long startTime = millis();
  
  allOff();
  delay(100);
  
  while(millis() - startTime < modeDuration - 500) {
    for(int twinkle = 0; twinkle < 12; twinkle++) { 
      if(millis() - startTime > modeDuration - 500) return;
      
      int whichLED = random(2);
      int whichColor = random(8);
      
      if(whichLED == 0) {
        for(int i = 0; i <= 255; i += 15) { 
          int r = (colors[whichColor][0] * i) / 255;
          int g = (colors[whichColor][1] * i) / 255;
          int b = (colors[whichColor][2] * i) / 255;
          setLEDColor(led1, r, g, b);
          delay(5); 
        }
        delay(200);
        
        for(int i = 255; i >= 0; i -= 15) {
          int r = (colors[whichColor][0] * i) / 255;
          int g = (colors[whichColor][1] * i) / 255;
          int b = (colors[whichColor][2] * i) / 255;
          setLEDColor(led1, r, g, b);
          delay(5);
        }
      } 
      else {
        for(int i = 0; i <= 255; i += 15) {
          int r = (colors[whichColor][0] * i) / 255;
          int g = (colors[whichColor][1] * i) / 255;
          int b = (colors[whichColor][2] * i) / 255;
          setLEDColor(led2, r, g, b);
          delay(5);
        }
        delay(200);
        
        for(int i = 255; i >= 0; i -= 15) {
          int r = (colors[whichColor][0] * i) / 255;
          int g = (colors[whichColor][1] * i) / 255;
          int b = (colors[whichColor][2] * i) / 255;
          setLEDColor(led2, r, g, b);
          delay(5);
        }
      }
      delay(random(100, 250)); 
    }
  }
}

void fireEffect() {
  unsigned long startTime = millis();
  
  while(millis() - startTime < modeDuration - 500) {
    for(int flame = 0; flame < 4; flame++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int intensity = 0; intensity <= 255; intensity += 10) {
        int g = map(intensity, 0, 255, 165, 40);
        setLEDColor(led1, 255, g, 0);
        setLEDColor(led2, 255, g, 0);
        delay(15);
      }
      
      for(int intensity = 255; intensity >= 0; intensity -= 10) {
        int g = map(intensity, 0, 255, 165, 40);
        setLEDColor(led1, 255, g, 0);
        setLEDColor(led2, 255, g, 0);
        delay(20);
      }
      
      allOff();
      delay(400);
    }
  }
}

void soundwaveEffect() {
  unsigned long startTime = millis();
  
  const int waveColors[][3] = {
    {0, 255, 255},
    {0, 128, 255},
    {128, 0, 255},
    {255, 0, 128},
    {255, 128, 0}
  };
  
  while(millis() - startTime < modeDuration - 500) {
    for(int wave = 0; wave < 5; wave++) { 
      if(millis() - startTime > modeDuration - 500) return;
      
      int colorIdx = wave % 5;
      
      for(int intensity = 50; intensity <= 255; intensity += 50) { 
        int r = (waveColors[colorIdx][0] * intensity) / 255;
        int g = (waveColors[colorIdx][1] * intensity) / 255;
        int b = (waveColors[colorIdx][2] * intensity) / 255;
        setLEDColor(led1, r, g, b);
        delay(15);
      }
      
      for(int intensity = 255; intensity >= 50; intensity -= 50) {
        int r = (waveColors[colorIdx][0] * intensity) / 255;
        int g = (waveColors[colorIdx][1] * intensity) / 255;
        int b = (waveColors[colorIdx][2] * intensity) / 255;
        setLEDColor(led1, r, g, b);
        delay(15);
      }
      
      int nextColor = (colorIdx + 1) % 5;
      for(int intensity = 50; intensity <= 255; intensity += 50) {
        int r = (waveColors[nextColor][0] * intensity) / 255;
        int g = (waveColors[nextColor][1] * intensity) / 255;
        int b = (waveColors[nextColor][2] * intensity) / 255;
        setLEDColor(led2, r, g, b);
        delay(15);
      }
      
      for(int intensity = 255; intensity >= 50; intensity -= 50) {
        int r = (waveColors[nextColor][0] * intensity) / 255;
        int g = (waveColors[nextColor][1] * intensity) / 255;
        int b = (waveColors[nextColor][2] * intensity) / 255;
        setLEDColor(led2, r, g, b);
        delay(15);
      }
    }
  }
}

void pulseSync() {
  unsigned long startTime = millis();
  
  const int pulseColors[][3] = {
    {255, 0, 255},
    {0, 255, 255},
    {255, 255, 0},
    {255, 0, 0},
    {0, 255, 0}
  };
  
  while(millis() - startTime < modeDuration - 500) {
    for(int color = 0; color < 5; color++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int pulse = 0; pulse < 3; pulse++) {
        for(int i = 0; i <= 255; i += 20) {
          int r = (pulseColors[color][0] * i) / 255;
          int g = (pulseColors[color][1] * i) / 255;
          int b = (pulseColors[color][2] * i) / 255;
          
          setLEDColor(led1, r, g, b);
          setLEDColor(led2, r, g, b);
          delay(10);
        }
        
        for(int i = 255; i >= 0; i -= 20) {
          int r = (pulseColors[color][0] * i) / 255;
          int g = (pulseColors[color][1] * i) / 255;
          int b = (pulseColors[color][2] * i) / 255;
          
          setLEDColor(led1, r, g, b);
          setLEDColor(led2, r, g, b);
          delay(10);
        }
        
        delay(200);
      }
    }
  }
}

void rainbowWave() {
  unsigned long startTime = millis();
  static int waveHue = 0;
  
  while(millis() - startTime < modeDuration - 500) {
    for(int cycle = 0; cycle < 3; cycle++) { 
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int step = 0; step < 360; step += 12) {
        int hue1 = (waveHue + step) % 360;
        int hue2 = (hue1 + 120) % 360;
        
        int r1, g1, b1, r2, g2, b2;
        hslToRgb(hue1, 1.0, 0.5, r1, g1, b1);
        hslToRgb(hue2, 1.0, 0.5, r2, g2, b2);
        
        setLEDColor(led1, r1, g1, b1);
        setLEDColor(led2, r2, g2, b2);
        delay(50);
      }
    }
    waveHue = (waveHue + 45) % 360;
  }
}

void matrixRain() {
  unsigned long startTime = millis();
  
  allOff();
  
  while(millis() - startTime < modeDuration - 500) {
    for(int drop = 0; drop < 5; drop++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      int r1 = random(100, 256);
      int g1 = random(100, 256);
      int b1 = random(100, 256);
      
      for(int intensity = 255; intensity >= 0; intensity -= 30) {
        setLEDColor(led1, 
          (r1 * intensity) / 255, 
          (g1 * intensity) / 255, 
          (b1 * intensity) / 255);
        delay(25);
      }
      
      int r2 = random(100, 256);
      int g2 = random(100, 256);
      int b2 = random(100, 256);
      
      for(int intensity = 255; intensity >= 0; intensity -= 30) {
        setLEDColor(led2, 
          (r2 * intensity) / 255, 
          (g2 * intensity) / 255, 
          (b2 * intensity) / 255);
        delay(25);
      }
      
      delay(300);
    }
  }
}

void colorRotation() {
  unsigned long startTime = millis();
  
  while(millis() - startTime < modeDuration - 500) {
    for(int rotation = 0; rotation < 2; rotation++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int colorIdx = 0; colorIdx < 8; colorIdx++) {
        int nextIdx = (colorIdx + 1) % 8;
        
        for(int step = 0; step <= 80; step += 4) {
          int r1 = map(step, 0, 80, colors[colorIdx][0], colors[nextIdx][0]);
          int g1 = map(step, 0, 80, colors[colorIdx][1], colors[nextIdx][1]);
          int b1 = map(step, 0, 80, colors[colorIdx][2], colors[nextIdx][2]);
          
          int r2 = 255 - r1;
          int g2 = 255 - g1;
          int b2 = 255 - b1;
          
          setLEDColor(led1, r1, g1, b1);
          setLEDColor(led2, r2, g2, b2);
          delay(15);
        }
      }
    }
  }
}

void discoMode() {
  unsigned long startTime = millis();
  
  const int discoColors[][3] = {
    {255, 0, 0},
    {0, 255, 0},
    {0, 0, 255},
    {255, 255, 0},
    {255, 0, 255},
    {0, 255, 255},
    {255, 255, 255}
  };
  
  while(millis() - startTime < modeDuration - 500) {
    for(int section = 0; section < 2; section++) {
      if(millis() - startTime > modeDuration - 500) return;
      
      for(int i = 0; i < 14; i++) {
        setLEDColor(led1, discoColors[i % 7][0], discoColors[i % 7][1], discoColors[i % 7][2]);
        setLEDColor(led2, discoColors[(i + 3) % 7][0], discoColors[(i + 3) % 7][1], discoColors[(i + 3) % 7][2]);
        delay(100);
      }
      
      for(int blink = 0; blink < 5; blink++) {
        setLEDColor(led1, 255, 255, 255);
        setLEDColor(led2, 255, 255, 255);
        delay(120);
        
        allOff();
        delay(120);
      }
      
      for(int strobe = 0; strobe < 8; strobe++) {
        int c1 = random(7);
        int c2 = (c1 + random(1, 4)) % 7;
        
        setLEDColor(led1, discoColors[c1][0], discoColors[c1][1], discoColors[c1][2]);
        setLEDColor(led2, discoColors[c2][0], discoColors[c2][1], discoColors[c2][2]);
        delay(150);
        
        allOff();
        delay(100);
      }
    }
  }
}

void hslToRgb(float h, float s, float l, int &r, int &g, int &b) {
  float c = (1.0 - fabs(2.0 * l - 1.0)) * s;
  float x = c * (1.0 - fabs(fmod(h / 60.0, 2.0) - 1.0));
  float m = l - c / 2.0;
  
  float r1 = 0, g1 = 0, b1 = 0;
  
  if(h < 60) {
    r1 = c; g1 = x;
  } 
  else if(h < 120) {
    r1 = x; g1 = c;
  } 
  else if(h < 180) {
    g1 = c; b1 = x;
  } 
  else if(h < 240) {
    g1 = x; b1 = c;
  } 
  else if(h < 300) {
    r1 = x; b1 = c;
  } 
  else {
    r1 = c; b1 = x;
  }
  
  r = (int)((r1 + m) * 255.0);
  g = (int)((g1 + m) * 255.0);
  b = (int)((b1 + m) * 255.0);
  
  r = constrain(r, 0, 255);
  g = constrain(g, 0, 255);
  b = constrain(b, 0, 255);
}
