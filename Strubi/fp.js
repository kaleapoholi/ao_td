/**
 *Javascript introduction
 *functional programming 
 *2018/10/05
 *Marie Economides
 */

//functionnal programming

//Pure function 
function bar(a,b){
    return (a<b)?`${a} is less than ${b}`:`${a} is greater than ${b}`;
}

//Arrow function 
const baz = (a,b) => (a<b) ?`${a} is less than ${b}`:`${a} is greater than ${b}`;

//NO LOOP
//Helper functions : map, filter, reduce 
let output = new Array(10);
for(let i=0; i<10; i++){
    output[i] = i*2;
}
console.log(output);

console.log('Map function...');
//const mulby2=(v)=>v*2;
//const mulby2=(v,i,arr)=>v*2 + arr[i-1];
const mulby2=(v,i,arr)=>(i%2 ===0) ? v*2 : v;
let input=[-1,0,1,2,3,4,5,6,7,8];
//nbre input= nbre output = use map
let outmap= input.map(mulby2);
console.log(outmap);

//nbre de sorties est plus petit
console.log('Filter function...');
const isEven =(v) => v%2 ===2;
let outfil= input.filter(isEven);
console.log(outfil);

// construire le tableau input
let myArray = Array.from({length:10}, (v,i)=> i-1);

//on a un tableau et on retroune autre chose
console.log('Reduce function...');
const sum =(accumulator, v) => accumulator+v;//=> c'est return
let outred= input.reduce(sum, 0);
console.log(outfil);

// Recusivity

//High order function (fonction qui retourne une autre fonction)
function high0(x){
    return function(y){
        return x+y;
    }
}

const high0rder = (x) =>(y) => x+y;
const add2=high0(2);
console.log(add(5));
let result=high0(2)(5);

//Currying - Curry Haskell
function foo(a,b,c){
    return a+b+c;
}

const curry= (a) => (b) => (c) => a+b+c;
let additions = curry(2)(4)(7);

//compose and pipe
const compose= (f,g) => (x) => f(g(x));

const add3 =(x)=> x+3;
const mul5 =(x)=> x*5;

const fog= compose(add3,mul5);
console.log(fog(10)); //53

const pipe= (f,g) => (x) => g(f(x));

const pp= pipe(mul5,add3);
console.log(pp(10)); //53


// dans common.js c'est des fonctions "fourre tout"