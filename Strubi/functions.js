/**
 *Javascript introduction 
 *2018/10/05
 *Marie Economides
 */

//bad function because NO RETURN 
function foo(){
    return console.log('foo!!');
}

//Pure function
function bar(a,b){
    return (a<b) ? `${a} is less than ${b}` : `${a} is greater than ${b}`; 
}

console.log(bar(30,20));

//Anonymous functions
const baz= function(a,b){
    return (a<b) ? `${a} < ${b}` : `${a} >= ${b}`; 
}
 
console.log(baz(40,50));

//Function as argument 
function add(a,b){
    return a+b;
}
function multiply(a,b){
    return a*b;
}

function operation(a,b,func){
 return func(a,b);
}

let sum=operation(12,34,add);
let mul=operation(12,34,multiply);

//Standard function 
function quz(a,b,c){
    return a*b/c;
}
//Anonymous
const quzz= function (a,b,c){
    return a*b/c;
}

//function returning an object
const quw= function (a,b,c){
    return {width:a,height:b,depth:c};
}

console.log(quw(100,200,400));

//Arrow function
const quza = (a,b,c) => a*b/c;
const quzb = (a,b,c) => {
    let d= b+c;
    return a*d;
}

//Baware of the parantheses for returning an object!!
const quww =(a,b,c) => ({width:a,height:b,depth:c});

//fucntional programming 
//NO LOOP
//Helper functions: map, filter, reduce

//Default Argument 
const range=(n,start=0,increment=1)=>{
    return [1,2,3];
}

let arr10= range(10,2,3);
let arr20= range(20,2);
let arr30= range(30);

//Argument list
const boo=(...args) => {
    console.log(args);
}

boo(1,2,3,4,5,'txt'); //Nb variable d'arguments
