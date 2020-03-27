int whole = 1300;                    //Whole Note
int half = whole/2;                  //Half Note
int quarter = whole/4;               //Quarter Note
int eight = whole/8;                 //Eight Note
int sixteenth = whole/16;            //Sixteenth Note
int tounge = sixteenth*0.05;         //Tounge duration 
int slur = sixteenth*0.00005;        //Slur duration 
int base_frequency = 440;            //Frequency that all the notes are based off of 
int speaker = 12;                    //The pin that the speaker uses
int button  = 3;                     //The pin for the button

void setup() {
  pinMode(button, INPUT_PULLUP);    //Sets the button as an input
}

void loop() {

  if (digitalRead(button) == LOW){    //Checks if the button is pushed
  
    int starting_frequency = 0;       //Sets variables for the boot up
    int slide = 10;                   //Sets variables for the boot up
  
    while (starting_frequency < 1315){     //Scoop from 25hz to e6 (the first note)
      tone(12, starting_frequency);        //Plays note
      delay(slide);                        //Waits
      noTone(12);                          //Stops note
      starting_frequency += 5;             //Increases frequency
    }                                      //Closes bootup while loop
  
    //Measure 1 and 2
    const char* measure1and2[] = {"E6", "Db6", "D6", "Db6", "D6", "Db6", "C6", "B5", "C6", "B5", "Bb5", "A5", "Ab5", "G5", "Gb5", "F5"};
    for (byte i = 0; i < (sizeof(measure1and2) / sizeof(measure1and2[0])); i++){ play(measure1and2[i], sixteenth, slur); }
  
    //Measure 3 and 4
    const char* measure3and4[] = {"E5", "Eb5", "D5", "Db5", "D5", "Db5", "C5", "B4", "C5", "B4", "Bb4", "A4", "Ab4", "G4", "Gb4", "F4"};
    for (byte i = 0; i < (sizeof(measure3and4) / sizeof(measure3and4[0])); i++){ play(measure3and4[i], sixteenth, slur); }
  
    //Measure 5 and 6
    const char* measure5and6[] = {"E4", "Eb4", "D4", "Db4", "D4", "Db4", "C3", "B3", "E4", "Eb4", "D4", "Db4", "D4", "Db4", "C3", "B3"};
    for (byte i = 0; i < (sizeof(measure5and6) / sizeof(measure5and6[0])); i++){ play(measure5and6[i], sixteenth, slur); }
  
    //Measure 7 and 8
    const char* measure7and8[] = {"E4", "Eb4", "D4", "Db4", "C3", "F4", "E4", "Eb4", "E4", "Eb4", "D4", "Db4", "C3", "Db4", "D4", "Eb4"};
    for (byte i = 0; i < (sizeof(measure7and8) / sizeof(measure7and8[0])); i++){ play(measure7and8[i], sixteenth, slur); }
  
    //Measure 9 and 10
    const char* measure9and10[] = {"E4", "Eb4", "D4", "Db4", "C4", "F4", "E4", "Eb4", "E4", "Eb4", "D4", "Db4", "C3", "Db4", "D4", "Eb4"};
    for (byte i = 0; i < (sizeof(measure9and10) / sizeof(measure9and10[0])); i++){ play(measure9and10[i], sixteenth, slur); }
    
    //Measure 11 and 12
    const char* measure11and12[] = {"E4", "Eb4", "D4", "Db4", "D4", "Db4", "C3", "B3", "C3", "Db4", "D4", "Eb4", "E4", "F4", "E4", "Eb4"};
    for (byte i = 0; i < (sizeof(measure11and12) / sizeof(measure11and12[0])); i++){ play(measure11and12[i], sixteenth, slur); }
  
    //Measure 13 and 14
    const char* measure13and14[] = {"E4", "Eb4", "D4", "Db4", "D4", "Db4", "C3", "B3", "C3", "D4b", "D4", "Eb4", "E4", "Gb4", "G4", "Ab4"};
    for (byte i = 0; i < (sizeof(measure13and14) / sizeof(measure13and14[0])); i++){ play(measure13and14[i], sixteenth, slur); }
  
    //Measure 15 and 16
    const char* measure15and16[] = {"A4", "Ab4", "G4", "Gb4", "F4", "Bb4", "A4", "Ab4", "A4", "Ab4", "G4", "Gb4", "F4", "Gb4", "G4", "Ab4"};
    for (byte i = 0; i < (sizeof(measure15and16) / sizeof(measure15and16[0])); i++){ play(measure15and16[i], sixteenth, slur); }
  
    //Measure 17 and 18
    const char* measure17and18[] = {"A4", "Ab4", "G4", "Gb4", "F4", "Bb4", "A4", "Ab4", "A4", "Ab4", "G4", "Gb4", "F4", "Gb4", "G4", "Ab4"};
    for (byte i = 0; i < (sizeof(measure17and18) / sizeof(measure17and18[0])); i++){ play(measure17and18[i], sixteenth, slur); }
    
    //Measure 19 and 20
    const char* measure19and20[] = {"A4", "Ab4", "G4", "Gb4", "F4", "Gb4", "G4", "Ab4", "F4", "Gb4", "G4", "Ab4", "A3", "Bb4", "A4", "G4"};
    for (byte i = 0; i < (sizeof(measure19and20) / sizeof(measure19and20[0])); i++){ play(measure19and20[i], sixteenth, slur); }
  
    //Measure 21 and 22
    const char* measure21and22[] = {"A4", "Ab4", "G4", "Gb4", "F4", "Fb4", "G4", "Ab4", "F4", "Gb4", "G4", "Ab4", "A4", "Bb4", "A4", "Ab4"};
    for (byte i = 0; i < (sizeof(measure21and22) / sizeof(measure21and22[0])); i++){ play(measure21and22[i], sixteenth, slur); }

    //Measure 23 and 24
    const char* measure23and24[] = {"A4", "A3", "A2", "A3", "A2", "A3", "A2", "A3", "Bb2", "A3", "Bb2", "Bb3", "Bb2", "A3", "Bb2", "Bb3"};
    for (byte i = 0; i < (sizeof(measure23and24) / sizeof(measure23and24[0])); i++){ play(measure23and24[i], sixteenth, slur); }
    
    //Measure 25 and 26 
    const char* measure25and26[] = {"A4", "A4", "A4", "A4", "A4", "A4", "A4", "A4", "Bb4", "C5", "Bb4", "Bb5", "Bb4", "C5", "Bb4", "Bb5"};
    for (byte i = 0; i < (sizeof(measure25and26) / sizeof(measure25and26[0])); i++){ play(measure25and26[i], sixteenth, slur); }

    //Measure 27 and 28
    const char* measure27and28[] = {"A5", "Bb4", "A4", "Ab4", "A4", "Bb4", "A4", "Ab4", "A4", "Bb4", "A4", "Ab4", "A4", "Bb4", "A4", "Ab4"};
    for (byte i = 0; i < (sizeof(measure27and28) / sizeof(measure27and28[0])); i++){ play(measure27and28[i], sixteenth, slur); }

    //Measure 29 and 30
    const char* measure29and30[] = {"A4", "Bb4", "B4", "C5", "Db5", "C5", "B4", "Bb4", "A4", "Bb4", "B4", "C5", "Db5", "C5", "B4", "Bb4"};
    for (byte i = 0; i < (sizeof(measure29and30) / sizeof(measure29and30[0])); i++){ play(measure29and30[i], sixteenth, slur); }

    //Measure 31 and 32
    const char* measure31and32[] = {"A4", "D4", "D4", "D4", "D4", "D4", "D4", "D4", "Eb4", "D4", "Eb4", "Eb5", "Eb4", "D4", "Eb4", "Eb5"};
    for (byte i = 0; i < (sizeof(measure31and32) / sizeof(measure31and32[0])); i++){ play(measure31and32[i], sixteenth, slur); }

    //Measure 33 and 34
    const char* measure33and34[] = {"D4", "D4", "D4", "D4", "D4", "D4", "D4", "D4", "Eb4", "D4", "Eb4", "Eb5", "Eb4", "D4", "Eb4", "Eb5"};
    for (byte i = 0; i < (sizeof(measure33and34) / sizeof(measure33and34[0])); i++){ play(measure33and34[i], sixteenth, slur); }

    //Measure 35 and 36 
    const char* measure35and36[] = {"D4", "Eb4", "D4", "Db4", "D4", "Eb4", "D4", "Db4", "D4", "Eb4", "D4", "Db4", "D4", "Eb4", "D4", "Db4"};
    for (byte i = 0; i < (sizeof(measure35and36) / sizeof(measure35and36[0])); i++){ play(measure35and36[i], sixteenth, slur); }

    //Measure 37 and 38 
    const char* measure37and38[] = {"D4", "Eb4", "E4", "F4", "Gb4", "F4", "E4", "Eb4", "D4", "Eb4", "E4", "F4", "Gb4", "F4", "E4", "Eb4"};
    for (byte i = 0; i < (sizeof(measure37and38) / sizeof(measure37and38[0])); i++){ play(measure37and38[i], sixteenth, slur); }

    //Meausre 39 and 40
    const char* measure39and40[] = {"D4", "Db4", "C4", "B3", "Bb3", "Eb5", "D5", "Db5", "D5", "Db5", "C5", "B4", "Bb4", "B4", "C5", "Db5", "D5"};
    for (byte i = 0; i < (sizeof(measure39and40) / sizeof(measure39and40[0])); i++){ play(measure39and40[i], sixteenth, slur); }

    //Measure 41 and 42
    const char* measure41and42[] = {"D5", "Db5", "C5", "B4", "C5", "B4", "Bb4", "A4", "Bb4", "B4", "C5", "Db5", "C5", "Db5", "D5", "Eb5"};
    for (byte i = 0; i < (sizeof(measure41and42) / sizeof(measure41and42[0])); i++){ play(measure41and42[i], sixteenth, slur); }

    //Measure 43 and 44
    const char* measure43and44[] = {"E5", "Eb5", "D5", "Db5", "D5", "Db5", "C5", "B4", "C5", "B4", "Bb4", "A4", "Ab4", "G4", "Gb4", "F4"};
    for (byte i = 0; i < (sizeof(measure43and44) / sizeof(measure43and44[0])); i++){ play(measure43and44[i], sixteenth, slur); }

    //Measure 45 and 46
    const char* measure45and46[] = {"E4", "F4", "E4", "Eb4", "E4", "F4", "E4", "Eb4", "E4", "F4", "E4", "Eb4", "E4", "F4", "E4", "Eb4"};
    for (byte i = 0; i < (sizeof(measure45and46) / sizeof(measure45and46[0])); i++){ play(measure45and46[i], sixteenth, slur); }

    //Measure 47 and ending
    const char* measure47[] = {"E4", "F4", "E4", "Eb4",};
    for (byte i = 0; i < (sizeof(measure47) / sizeof(measure47[0])); i++){ play(measure47[i], sixteenth, slur); }
    play("D6", quarter, slur);
    play("D5", quarter, slur);
    play("D4", quarter, slur);
    play("D3", quarter, slur); 
    play("D2", whole, slur);
    
  }               //Closes button if statement
}                 //Closes void loop

void play(String note, int duration, int pause){     //Function to play any note

  int octave = 0;                      //Resets the variables used in the function
  int half_step = 0;                   //Resets the variables used in the function

  if (note.length() == 2){              //Checks if it does not have an accendental
    if (note.substring(0,1) == "A"){ half_step = 0; }
    if (note.substring(0,1) == "B"){ half_step = 2; }
    if (note.substring(0,1) == "C"){ half_step = -9; }
    if (note.substring(0,1) == "D"){ half_step = -7; }
    if (note.substring(0,1) == "E"){ half_step = -5; }
    if (note.substring(0,1) == "F"){ half_step = -4; }
    if (note.substring(0,1) == "G"){ half_step = -2; }

    if (note.substring(1) == "1"){ octave = -36; }
    if (note.substring(1) == "2"){ octave = -24; }
    if (note.substring(1) == "3"){ octave = -12; }
    if (note.substring(1) == "4"){ octave = 0; }
    if (note.substring(1) == "5"){ octave = 12; }
    if (note.substring(1) == "6"){ octave = 24; }
    if (note.substring(1) == "7"){ octave = 36; }

  }                                      //Closes if
  
  if (note.length() == 3){              //Checks if it has an accendental 
    if (note.substring(0,2) == "A"){ half_step = 0; }
    if (note.substring(0,2) == "Bb"){ half_step = 1; }
    if (note.substring(0,2) == "Db"){ half_step = -8; }
    if (note.substring(0,2) == "Eb"){ half_step = -6; }
    if (note.substring(0,2) == "Gb"){ half_step = -3; }
    if (note.substring(0,2) == "Ab"){ half_step = -1; }

    if (note.substring(2) == "1"){ octave = -36; }
    if (note.substring(2) == "2"){ octave = -24; }
    if (note.substring(2) == "3"){ octave = -12; }
    if (note.substring(2) == "4"){ octave = 0; }
    if (note.substring(2) == "5"){ octave = 12; }
    if (note.substring(2) == "6"){ octave = 24; }
    if (note.substring(2) == "7"){ octave = 36; }
    
  }                                       //Closes if 
  
    int interval = half_step + octave;      //Adds halfsteps ad octave intergers together
    float a = 1.059463094;                  //This number is used in the equation to calculate the frequency 
    int frequency = 880*pow(a, interval);   //Calculates the frequency of the note
    
    tone(speaker, frequency);               //Plays the note
    delay(duration);                        //Waits to stop the note
    delay(pause);                           //Tounges or slurs the note
    noTone(speaker);                        //Stops the note
}
