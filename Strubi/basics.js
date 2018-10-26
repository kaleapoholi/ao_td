/**
 *Javascript introduction 
 *2018/10/05
 *Marie Economides
 */

// 1- variables 
let i=0; // keyword 'var' must be unused
const PI=3.14; //PI=7; is an ERROR

// 2- String
let txt='This is a string';
let txt2=`The value of PI is ${PI}`;
let txt3= `>Title
zfjvoljnhdgvlkjdfnvf
fschjvbffdkjvnhfjnvf`;

// 3- Array
let array=[1,2,3,4,5];
console.log(array[0]);
//append an element
array.push(10);
//get length of an array
let len = array.length;
console.log(len);

//Destructuring
let arr1=[10,20,30];
let arr2=[40,50,60];
let arr12=[...arr1,...arr2];
console.log(arr12);

let identity=[[1,0,0],[0,1,0],[0,0,1]];

// 4- Objects
let seq={
    title:'title of protein',
    data:'AFJVGFJGM'
};
console.log(seq);
console.log(seq.title);
console.log(seq['title']);

// 5- Loops 
//while
console.log('while');
while (i<10){
    console.log(i);
    i=i+1;
}
//do while
console.log('do while');
i=0;
do{
    console.log(i);
    i=i+1;
}while(i<10);

//for
console.log('for');
for(let j=0; j<10; j++){
    console.log(j);
}

//le k contient l'index dans le tableau pas la valeur
console.log('for .. in');
let zz=[10,20,30,40];
for(let k in zz){
    console.log(`index ${k} value ${zz[k]}`);
}

//for..in de python
console.log('for .. of');
let zz2=[10,20,30,40];
for(let v of zz2){
    console.log(`value ${v}`);
}

// 6- Conditionals

let k=10;
if(k<20){
    console.log(`${k} is less than 20`);
}
else if (k>20 && k<40){
    console.log(`${k} is between 20 and 40`);
}
//strict equality
else if (k===50){
    console.log(`${k} is equal 50`);
}
else if(k !==60){
    console.log(`${k} is different of 60`);
}
else if (k===70 || k===80){
    console.log(`${k} is equal to 70 or 80`);
}
else{
    console.log(`${k} is a number`);
}

// Ternary Operator
let a=10;
let b=20;
let result ;
//code1
if (a<b){
    result =-1;
}
else{
    result =1;
}
//code 2
result=(a<b) ? -1 : 1;

//code 1 ~ code 2