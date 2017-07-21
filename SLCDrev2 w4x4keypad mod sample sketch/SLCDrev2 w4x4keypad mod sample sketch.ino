/*
  e-Gizmo Serial LCD II revision 2
      with 4x4 Keypad Module Sketch Demonstration
  (EZHMI Display)

  This simple sketch contains easy communications
  interface functions that you can adopt and improve
  according to your requirements.

  ===================
  Wiring Connections:
  ===================
  Serial LCD II rev2 ~ GizDuino MCU

      TXD  ------------>   RXD
      RXD  ------------>   TXD
      GND  ------------>   GND

  Serial LCD II rev2 ~ 4x4 Keypad Module

       0  ------------>   COL4
       1  ------------>   COL3
       2  ------------>   COL2
       3  ------------>   COL1
       4  ------------>   ROW4
       5  ------------>   ROW3
       6  ------------>   ROW2
       7  ------------>   ROW1

  by e-Gizmo Mechatronix Central
  November 11, 2015
  hhtp://www.e-gizmo.com

*/

char character;
String KEY;
char  rxmsg[30];
byte stage;
byte rxctr;
byte  msg;
byte key;

const int MODEPIN = 19;
String k = "";
int initialize = 0;

byte index = 0; // Index into array; where to store the character
void setup()  
{
  Serial.begin(9600);
  delay(100);
  ///////////////////////////////////
  pinMode(MODEPIN,OUTPUT);
  digitalWrite(MODEPIN,HIGH);

  Send_Command("F");
  Send_Command("c");
  Send_To("1","e-Gizmo Serial LCDII","0");
}
  

void loop(){

  String dataString = "";

  while(Serial.available()>0)
  {
    character = Serial.read();

    KEY += character;
    
    switch(character){
    case '1':    // '+1' is pressed
     if (character == '1') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);  //print to position (row2)
    Serial.println("1"); //print the number '1'
    Serial.write(0x03);
    break;
    case '2':     // '+2' is pressed
     if (character == '2') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("2"); //print the number '2'
    Serial.write(0x03);
    break;
     case '3':     // '+3' is pressed
     if (character == '3') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("3"); //print the number '3'
    Serial.write(0x03);
    break;
    case '4':     // '+4' is pressed
    if (character == '4') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("4"); //print the number '4'
    Serial.write(0x03);
    break;
     case '5':     // '+5' is pressed
     if (character == '5') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("5"); //print the number '5'
    Serial.write(0x03);
    break;
    case '6':     // '+6' is pressed
    if (character == '6') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("6"); //print the number '6'
    Serial.write(0x03);
    break;
     case '7':     // '+7' is pressed
     if (character == '7') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("7"); //print the number '7'
    Serial.write(0x03);
    break;
    case '8':     // '+8' is pressed
    if (character == '8') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("8"); //print the number '8'
    Serial.write(0x03);
    break;
    case '9':     // '+9' is pressed
    if (character == '9') {
    Serial.write(0x02);
    Serial.print(">");
    Serial.print(index);
    Serial.write(0x03);
    index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("9"); //print the number '9'
    Serial.write(0x03);
    break;
    case '0':     // '+0' is pressed
    if (character == '0') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("0"); //print the number '0'
    Serial.write(0x03);
    break;
    case 'A':     // '+A' is pressed
    if(character == 'A'){
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
     Serial.write(0x02);
     Serial.print(2);
     Serial.println("A"); //print the number 'A'
     Serial.write(0x03);
     break;
    case 'B':     // '+B' is pressed
    if (character == 'B') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("B"); //print the number 'B'
    Serial.write(0x03);
    break;
    case 'C':     // '+C' is pressed
    if (character == 'C') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("C"); //print the number 'C'
    Serial.write(0x03);
    break;
    case 'D':     // '+D' is pressed
    if (character == 'D') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("D"); //print the number 'D'
    Serial.write(0x03);
    break;
     case '*':     // '+*' is pressed
     if (character == '*') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("*"); //print the number '*'
    Serial.write(0x03);
    break;
    case '#':     // '+#' is pressed
    if (character == '#') {
     Serial.write(0x02);
     Serial.print(">");
     Serial.print(index);
     Serial.write(0x03);
     index++;
     }
    Serial.write(0x02);
    Serial.print(2);
    Serial.println("#"); //print the number '#'
    Serial.write(0x03);
    break;
}
  }

}



/////////////////////////SERIAL LCD FUNCTIONS///////////////////////////

void Send_Command(char *message){
  Serial.write(0x02);      //STX
  Serial.print(message);
  Serial.write(0x03);      //ETX
  stage=0;                 //Reset Rx buffer
  rxctr=0;
  wait_response();        // Wait until EZ HMI responds
}

void  wait_response(void){
  while(stage !=3) read_buffer();
}

void  read_buffer(void){
  if(Serial.available()>0){
    char  rxchar=Serial.read();  // Read one Rxed character
    if(stage==0){                // Look for STX
      if(rxchar==0x02){          // STX?
        stage=1;                // STX is found, stage 1
        return;
      }
    }
    if(stage==1){              // Store next Rx char until ETX is detected
      if(rxchar==0x03)        // ETX?
      {
        stage=3;              // ETX found, data ready=stage 3
        rxmsg[rxctr]=0;      // NULL String terminator
      }
      else
      {
        if(rxctr<30){      // collect data until ETX is found or buffer full
          rxmsg[rxctr]=rxchar;
          rxctr++;
        }
      }
    }

  }
}
void Send_To(char *line,char *message,char *pos){

  k=message;        // Save input string
  Serial.write(0x02);      //STX
  Serial.print(">");      // Send position info
  Serial.print(pos);
  Serial.write(0x03);    //ETX
  stage=0;
  rxctr=0;
  wait_response();

  Serial.write(0x02); 
  Serial.print(line);    // Send message to line
  Serial.print(k);
  Serial.write(0x03);
  stage=0;
  rxctr=0;
  wait_response();

}

void IO(char *message,int port){
  Serial.write(0x02);      //STX
  Serial.print(message);
  Serial.print(port);
  Serial.write(0x03);      //ETX
  stage=0;                 //Reset Rx buffer
  rxctr=0;
  wait_response();        // Wait until EZ HMI responds
}
