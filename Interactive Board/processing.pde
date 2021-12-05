import processing.serial.*;
import processing.video.*;

Serial myPort;
int i;
Movie mov1;
Movie mov2;
Movie mov3;
Movie mov4;

void setup(){
  myPort=new Serial(this,"/dev/cu.usbmodem14301",9600);  
  size(200,200);
}

void draw() {
  
  if(myPort.available()>0){      
        i=myPort.read();
        println(i);
        if(i == 51){
           mov1 = new Movie(this,"movie1.mov");
           mov1.read();
           image(mov1,0,0);
        }else if(i == 50){
           mov2 = new Movie(this,"movie2.mov");
           mov2.read();
           image(mov2,0,0);
        }else if(i == 49){
           mov3 = new Movie(this,"movie3.mov");
           mov3.read();
           image(mov2,0,0);
        }else if(i == 48){
           mov4 = new Movie(this,"movie4.mov");
           mov4.read();
           image(mov4,0,0);
        }
    }

delay(1000); 

}
