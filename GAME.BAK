#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void obmove(int * move,int * poi){
*move -= 25;
if(*move <  -50){
*move = 650;
*poi = *poi + 1;
}
}
void jump(int*ply,int*air){
if(*air == 1){
*ply -= 15;
}
 if(*air == -1){
*ply += 15;
 }
 if(*ply <= 225){
 *air = -1;
 }  else if(*ply == 325){
 *air =0 ;
 }
}
void main(){
clrscr();
int stop = 0;
int gd = DETECT,gm;
int obx = 650 , oby = 350,plx = 100, ply = 325 ,air = 0,poi = 0;
initgraph(&gd,&gm,"C://turboc3//bgi");
while(stop==0){
delay(50);
  cleardevice();
  cout<<poi;
  line(0,400,650,400);
  rectangle(obx,oby,obx+50,oby+50);
  rectangle(plx,ply,plx+50,ply+75);
  if( plx+50>obx&&plx<=obx+50&&ply+75 >= 350 ){
 cout<<"you lost ";
 getch();
 }
  if(kbhit()){
  char key = getch();
  if(key == '\r'){
  stop = 1;
  }else if(key == 32 && air == 0){
  air = 1;
  }}//input nested if
   if(air != 0){
    jump(&ply,&air);
   }
   obmove(&obx,&poi);
}  //main while cl bracket

closegraph();
} //main cl bracket