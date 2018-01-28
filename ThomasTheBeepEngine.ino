const int speakerPin = 10;
const int buttonPin = 8;

const int C = 1046 / 2;
const int CS = 1108 / 2;
const int D = 1174 / 2;
const int DS = 1244 / 2;
const int E = 1318 / 2;
const int F = 1396 / 2;
const int FS = 1479 / 2;
const int G = 1567 / 2;
const int GS = 1661 / 2;
const int A = 1760 / 2;
const int AS = 1864 / 2;
const int B = 1975 / 2;

const float bpm = 150;
const int beat = ((60 / bpm)*1000);
const int measure = beat * 4;
const int chordDelay = 16;


void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  Serial.println("beatlength" + beat);
}

void playNote(int note, int duration) {
  tone(speakerPin, note, duration);
  delay(duration);
}

void playChord(int note1, int note2, int totalDur) {
  for (int i = 0; i <= totalDur; i += 2*chordDelay) {
    tone(speakerPin, note1, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note2, chordDelay);
    delay(chordDelay);
  }
}

void playChord(int note1, int note2, int note3, int totalDur) {
  for (int i = 0; i <= totalDur; i += 3*chordDelay) {
    tone(speakerPin, note1, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note2, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note3, chordDelay);
    delay(chordDelay);
  }
}

void playChord(int note1, int note2, int note3, int note4, int totalDur) {
  for (int i = 0; i <= totalDur; i += 4*chordDelay) {
    tone(speakerPin, note1, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note2, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note3, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note4, chordDelay);
    delay(chordDelay);
  }
}

void playChord(int note1, int note2, int note3, int note4, int note5, int totalDur) {
  for (int i = 0; i <= totalDur; i += 5*chordDelay) {
    tone(speakerPin, note1, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note2, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note3, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note4, chordDelay);
    delay(chordDelay);
    tone(speakerPin, note5, chordDelay);
    delay(chordDelay);
  }
}

void playIntro() {
  //eM
  tone(speakerPin, GS/2, beat/2);
  delay(beat/2);
  playChord(D, E, (beat/8));
  delay(beat/8);
  playChord(D, E, (beat/8));
  delay(beat/8);
  tone(speakerPin, DS/2, beat/2);
  delay(beat/2);
  playChord(CS, DS, beat/4);
  delay(beat/4);
  tone(speakerPin, GS/2, beat/2);
  delay(beat/2);
  playChord(CS, DS, beat/4);
  delay(beat/4);
  delay(beat);
  //eoEM
  //eM
  tone(speakerPin, GS/2, beat/2);
  delay(beat/2);
  playChord(D, E, (beat/8));
  delay(beat/8);
  playChord(D, E, (beat/8));
  delay(beat/8);
  tone(speakerPin, DS/2, beat/2);
  delay(beat/2);
  playChord(CS, DS, beat/4);
  delay(beat/4);
  tone(speakerPin, GS/2, beat/2);
  delay(beat/2);
  playChord(CS, DS, beat/4);
  delay(beat/4);
  delay(beat);
  //eoEM
}

void playFirstPart() {
  //fM
  playChord(G, G*2, beat/2);
  playChord(A, A*2, beat/4);
  delay(beat/4);
  playChord(B, B*2, beat/4);
  delay(beat/4);
  playChord(C, C*2, beat);
  playChord(D, D*2, beat/4);
  delay(beat/4);
  playChord(E, E*2, beat/2);
  delay(beat/2);
  //eoFM
  //sM
  playChord(GS/2, GS, beat*2);
  delay(beat*2);
  //eoSM
  //tM
  playChord(A, A*2, beat/2);
  playChord(F, F*2, beat/4);
  delay(beat/4);
  playChord(A, A*2, beat/4);
  delay(beat/4);
  playChord(G/2, G, beat/2 + beat);
  delay(beat);
  //eoTM
  //foM
  tone(speakerPin, F, beat/4);
  delay(beat/4);
  tone(speakerPin, G, beat/4);
  delay(beat/4);
  playChord(A, A*2, beat/2);
  playChord(F, F*2, beat/4);
  delay(beat/4);
  playChord(F, F*2, beat/4);
  delay(beat/4);
  playChord(A, A*2, beat/4);
  playChord(G, G*2, (beat/4 + (beat/2)*1.5));
  playChord(FS, FS*2, beat/4);
  playChord(G, G*2, beat/4);
  playChord(F, F*2, beat/4);
  playChord(G, G*2, beat/4);
  playChord(F, F*2, beat/4);
  //eoFOM
  //fiM
  playChord(G, G*2, beat*0.9);
  delay(beat*0.1);
  playChord(G, G*2, beat/2);
  delay(beat/2);
  delay(beat/2);
  delay(beat/4);
  playChord(FS, FS*2, beat/4);
  playChord(G, G*2, beat/4);
  playChord(F, F*2, beat/4);
  playChord(G, G*2, beat/2);
  //eofiM
  //siM
  playChord(GS, GS*2, beat*0.9);
  delay(beat*0.1);
  playChord(GS, GS*2, beat/2);
  delay(beat/2);
  delay(beat/4);
  playChord(DS, DS*2, (beat/2)*1.5);
  playChord(F, F*2, beat/2);
  playChord(FS, FS*2, beat/2);
  //eoSIM
  //seM
  playChord(G, G*2, beat);
  playChord(AS, AS*2, beat);
  playChord(F, F*2, beat);
  playChord(G, G*2, beat);
  //eoSEM
  //eM
  tone(speakerPin, GS/2, beat/2);
  delay(beat/2);
  playChord(D, E, (beat/8));
  delay(beat/8);
  playChord(D, E, (beat/8));
  delay(beat/8);
  tone(speakerPin, DS/2, beat/2);
  delay(beat/2);
  playChord(CS, DS, beat/4);
  delay(beat/4);
  tone(speakerPin, GS/2, beat/2);
  delay(beat/2);
  playChord(CS, DS, beat/4);
  delay(beat/4);
  delay(beat);
  //eoEM
}

void playFirstPartCut() {
  //fM
  playChord(G, G*2, beat/2);
  playChord(A, A*2, beat/4);
  delay(beat/4);
  playChord(B, B*2, beat/4);
  delay(beat/4);
  playChord(C, C*2, beat);
  playChord(D, D*2, beat/4);
  delay(beat/4);
  playChord(E, E*2, beat/2);
  delay(beat/2);
  //eoFM
  //sM
  playChord(GS/2, GS, beat*2);
  delay(beat*2);
  //eoSM
  //tM
  playChord(A, A*2, beat/2);
  playChord(F, F*2, beat/4);
  delay(beat/4);
  playChord(A, A*2, beat/4);
  delay(beat/4);
  playChord(G/2, G, beat/2 + beat);
  delay(beat);
  //eoTM
  //foM
  tone(speakerPin, F, beat/4);
  delay(beat/4);
  tone(speakerPin, G, beat/4);
  delay(beat/4);
  playChord(A, A*2, beat/2);
  playChord(F, F*2, beat/4);
  delay(beat/4);
  playChord(F, F*2, beat/4);
  delay(beat/4);
  playChord(A, A*2, beat/4);
  playChord(G, G*2, (beat/4 + (beat/2)*1.5));
  playChord(FS, FS*2, beat/4);
  playChord(G, G*2, beat/4);
  playChord(F, F*2, beat/4);
  playChord(G, G*2, beat/4);
  playChord(F, F*2, beat/4);
  //eoFOM
  //fiM
  playChord(G, G*2, beat*0.9);
  delay(beat*0.1);
  playChord(G, G*2, beat/2);
  delay(beat/2);
  delay(beat/2);
  delay(beat/4);
  playChord(FS, FS*2, beat/4);
  playChord(G, G*2, beat/4);
  playChord(F, F*2, beat/4);
  playChord(G, G*2, beat/2);
  //eofiM
  //siM
  playChord(GS, GS*2, beat*0.9);
  delay(beat*0.1);
  playChord(GS, GS*2, beat/2);
  delay(beat/2);
  delay(beat/4);
  playChord(DS, DS*2, (beat/2)*1.5);
  playChord(F, F*2, beat/2);
  playChord(FS, FS*2, beat/2);
  //eoSIM
  //seM
  playChord(G, G*2, beat);
  playChord(AS, AS*2, beat);
  playChord(F, F*2, beat);
  playChord(G, G*2, beat);
  //eoSEM
}

void playSecondPart() {
  //fM
  playChord(GS, GS*2, beat/2);
  delay(beat/2);
  delay(beat);
  delay(beat/4);
  playChord(GS, GS*2, (beat/2)*1.5);
  playChord(G, G*2, beat/2);
  playChord(FS, FS*2, beat/2);
  //eoFM
  //sM
  delay(beat/2);
  playChord(F, AS/2, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/4);
  playChord(F, AS/2, (beat/4)+beat);
  //eoSM
  //tM
  delay(beat/2);
  playChord(DS/2, GS, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/4);
  playChord(DS/2, GS, (beat/4)+beat);
  //eoTM
  //foM
  delay(beat/2);
  playChord(AS/2, GS/2, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(AS/2, GS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(AS/2, GS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/2);
  playChord(AS/2, GS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(AS/2, GS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/4);
  playChord(AS/2, GS/2, (beat/4)+beat);
  //eoFOM
  //fiM
  delay(beat/2);
  playChord(DS/2, GS, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(DS/2, GS, beat/4);
  playChord(DS/2, G/2, beat/4);
  delay(beat/4);
  playChord(DS/2, FS/2, beat/4);
  playChord(DS/2, FS/2, beat);
  playChord(DS/2, G/2, (beat/2));
  //eoFIM
  //siM
  delay(beat/2);
  playChord(F, AS/2, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(F, AS/2, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/4);
  playChord(F, AS/2, (beat/4)+beat);
  //eoSIM
  //seM
 delay(beat/2);
  playChord(DS/2, GS, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(DS/2, GS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/4);
  playChord(DS/2, GS, (beat/4)+beat);
  //eoSEM
  //eM
  delay(beat/2);
  playChord(D/2, AS, (beat/2)*0.8);
  delay((beat/2)*0.2);
  playChord(CS/2, AS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(CS/2, AS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/2);
  playChord(CS/2, AS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  playChord(CS/2, AS, (beat/4)*0.8);
  delay((beat/4)*0.2);
  delay(beat/4);
  playChord(CS/2, AS, (beat/4)+beat);
  //eoEM
  
  //nM
  playChord(DS/2, DS, (beat*1.5)*0.9);
  delay((beat*1.5)*0.1);
  playChord(DS/2, DS, (beat/2)*0.9);
  delay((beat/2)*0.1);
  playChord(CS/2, CS, (beat*1.5)*0.9);
  delay((beat*1.5)*0.1);
  playChord(CS/2, CS, (beat/2)*0.9);
  delay((beat/2)*0.1);
  //eoNM
  //tM
  playChord(C/2, C, (beat*1.5)*0.9);
  delay((beat*1.5)*0.1);
  playChord(C/2, C, (beat/2)*0.9);
  delay((beat/2)*0.1);
  playChord(AS/2, AS, (beat*1.5)*0.9);
  delay((beat*1.5)*0.1);
  playChord(AS/2, AS, (beat/2)*0.9);
  delay((beat/2)*0.1);
  //eoTM
  //elM
  playChord(G/2, G, (beat*1.5)*0.9);
  delay((beat*1.5)*0.1);
  playChord(G/2, G, (beat/2)*0.9);
  delay((beat/2)*0.1);
  playChord(F/2, F, (beat*1.5)*0.9);
  delay((beat*1.5)*0.1);
  playChord(F/2, F, (beat/2)*0.9);
  delay((beat/2)*0.1);
  //eoELM
  //laM
  playChord(C/2, C, beat/4);
  playNote(FS/2, beat/4);
  playNote(G/2, beat/4);
  playNote(A/2, beat/4);
  playNote(G/2, beat/4);
  playNote(F/2, beat/4);
  playNote(G/2, beat/4);
  playNote(A/2, beat/4);
  playChord(D/2, G/2, beat/2);
  delay(beat/2);
  delay(beat/4);
  playNote(E, (beat/2));
  delay(beat/4);
  //eoLAM
}

void playFinalPart() {
  //1M
  playChord(GS, GS*2, beat/2);
  delay(beat/2);
  delay(beat);
  delay(beat/2);
  playChord(GS/2, GS, beat/2);
  playChord(G/2, G, beat/2);
  playChord(FS/2, FS, beat/2);
  //e1M
  //2M
  playNote(F, beat/2);
  playNote(F/2, beat/2);
  playChord(A, F, beat/4);
  playNote(A/2, beat/4);
  playChord(GS, F, beat/4);
  playChord(AS, CS, beat/4 + beat/2);
  playNote(AS/2, beat/2);
  playChord(CS, CS*2, beat);
  //e2M
  //3M
  playChord(DS, C*2, ((beat/2)*1.5)*0.9);
  delay(((beat/2)*1.5)*0.1);
  playChord(DS, C*2, (beat/2)*0.9);
  delay((beat/2)*0.1);
  playChord(DS, C*2, beat/4);
  playChord(CS, AS, (beat/4));
  delay(beat/4);
  playChord(C, GS, beat/2);
  delay(beat/2);
  playChord(C, GS, beat/2);
  delay(beat/2);
  //e3M
  //4M
  playNote(GS, beat/4);
  playNote(F, beat/4);
  playNote(GS, beat/4);
  playNote(F, beat/4);
  
  playNote(D, beat/4);
  playNote(F, beat/4);
  playNote(CS, beat/4);
  playNote(B/2, beat/4);
  
  playNote(CS, beat/4);
  playNote(AS/2, beat/4);
  playNote(GS/2, beat/4);
  playNote(AS/2, beat/4);

  playNote(GS/2, beat/2);
  playNote(FS, beat/2);
  //e3M
  //4M
  playChord(DS/2, C, ((beat/2)*1.5)*0.9);
  delay(((beat/2)*1.5)*0.1);
  playChord(DS/2, C, (beat/2)*0.9);
  delay((beat/2)*0.1);
  playChord(DS/2, C, beat/4);
  playChord(CS/2, AS/2, beat/4);
  delay(beat/4);
  playChord(C/2, GS/2, beat/2);
  delay(beat/2);
  playChord(GS, GS*2, beat/2);
  delay(beat/2);
}

void loop() {
  if (!(digitalRead(buttonPin) == HIGH)) {
    return;
  }
  playIntro();
  playFirstPart();
  playFirstPartCut();
  playSecondPart();
  playFirstPartCut();
  playSecondPart();
  playFirstPartCut();
  playFinalPart();
}
