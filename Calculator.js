let buttons = Array.from(document.getElementsByClassName("button"));

var display=document.getElementById("result");

var display1=document.getElementById("result1");

var display2=document.getElementById("result2");

var c=0;

buttons.map( button => {

    button.addEventListener('click', (e) => {

    switch(e.target.innerText)

    { case 'C': display1.innerHTML = ''; display2.innerHTML=" ";

    break;

     case '='  : 

     display1.innerHTML=display2.innerHTML;

     display2.innerHTML=" ";

     break;

     

     

     

     

     default: 

     if(event.target.innerText=="="){

     display1.innerHTML+="";}

     else{  display1.innerHTML+= event.target.innerHTML;

     }

     display2.innerHTML=eval(display1.innerHTML);

}

},false);

});

