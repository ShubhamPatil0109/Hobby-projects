var dx=0;
function up()
{
    dx+=30.5;
}
var canvas=document.querySelector('.canva');
var ctx=canvas.getContext('2d');
const image1= new Image();
image1.src=" https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQlWi5b_ewUNzi8DnuyKBn3SbrdzQxBvrgJ7w&usqp=CAU"
const image=new Image();
image.src=" https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR5e773lYwhclJUH2_0cb1yv7WS_01CvElJrQ&usqp=CAU";
const image2=new Image();
image2.src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSg0gd4FASV4fxU-yTQigXiqRNiO1GOTV6EGw&usqp=CAU";
var score=0;
function start(){

ctx.fillStyle="rgb(0,0,0)";
ctx.fillRect(0,0,600,600);
var x=0;
var y=0;
var i=0;
var dy=0;
var width=600;
var j=200;
var gap=0;
var width=0;
var height=0;
var n=0;
var s=0;

var xcor=0;
var om1,om2,om3;
class pole2
{

   pole(gap,width,n){
    
    s=600-n-width;
    ctx.fillRect(gap-y,0,80,s);
    ctx.fillRect(gap-x,600,80,-n);
    
    

}

}
var a1= new pole2;
var a2=new pole2;
var a3=new pole2;

function draw()
{x+=2;
y+=2;

ctx.drawImage(image,0,0,600,600);
ctx.fillStyle="rgb(0,0,255)";
var km;
var am;
ctx.font=" 80px Verdana";
ctx.fillText(score,200,60);
var sco;

var rand=Math.floor(Math.random()*3);
for(km=0,am=0,sco=0;km<1000;km++,am+=600,sco++)

{ 

    om1=300+am;
         
         a1.pole(om1,180,170);
         
        om2=600+am;
         a2.pole(om2,150,200);
         
          om3=900+am;
         a3.pole(om3,120,150);
         if(((300*sco)-y)==20)
{
    score++;
}
         if((xcor+25)>=410 && (300*sco+65)-y<=140 && (300*sco+65)-y>=60)
{
gameover();
}
if((xcor+25>=370) && ((600*sco)+20)-y<=140 && ((600*sco)+20)-y>=60)
{
    gameover();
}
if((xcor+25)<=280 && (300*sco+25)-y<=140 && (300*sco+25)-y>=60)
{
gameover();
 }
 if((xcor+25)<=350 && (900*sco+25)-y<=140 && (900*sco+25)-y>=60)
         {
gameover();
 }
    } 
        
    
     
     
     bird();
    
   window.requestAnimationFrame(draw); 
    j+=100;
}

function bird(){
dy-=1.5;
var ycor=60;

xcor=190-dy-dx;
ctx.drawImage(image2,ycor,xcor,40,50);

  
}
draw();
}
start();
function gameover()
{var score1=score;
canvas.style.display="none";
var canvas1=document.querySelector('.canva1');
var ctx1=canvas1.getContext('2d');
var image6=new Image();
image6.src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT01PwVNdnfZRzbAPDbCrX08MoI0JUz2wt_2w&usqp=CAU";
canvas1.style.display="inline";
ctx1.drawImage(image6,0,0,300,300)


}


