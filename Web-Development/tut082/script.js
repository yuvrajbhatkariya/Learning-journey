
// 1. IIFE: -

async function sleep(){
    return new Promise((resolve,reject)=>{
        setTimeout(() =>{
            resolve(99);
        },2000)
    })
}

// To call this we have write it in async function :- 
// let a = await sleep()
// let b = await sleep()


// One more option is to use IIFE:-
// (async function main() {
//     let a = await sleep()
//     console.log(a);
//     let b = await sleep()
//     console.log(b);
// })()


// 2. Destructuring :-

let [x,y] = [2,4]
let [a,b,c] = [5,6]
let [p,q] = [4,5,8]
let [l,m,n,...rest] = [2,3,4,5,7,8,8,9]

console.log([x,y])
console.log(x);
console.log(a,b,c)
console.log(p,q);
console.log(l,m,n,rest)

let obj = {
    i:2,
    j:3,
    k:4
}

let {i,j} = obj;
console.log(i,j);


function sum(a,b,c,d){
    return a+b+c+d
}

let arr =[1,2,3,4]
console.log(sum(arr[0],arr[1],arr[2],arr[3]));
// Unpack the array
console.log(sum(...arr))




// 3. Hoisting : -


hello()

// with const is not working before : -

// const w = function hello(){
//     console.log(a1)
//     var a1 = 5;    
//     // let a1 = 7;        
//     console.log(a1)
// }

// without const it work 

function hello(){
    console.log(a1)
    var a1 = 5;     // undefined
    // let a1 = 7;        // error
    console.log(a1)
}

// hello()



