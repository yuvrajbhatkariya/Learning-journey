// Exercise-9 : Faulty calculator: -
let r = Math.random();
function add(a,b){
    let s = (r<0.2) ? (a-b) :(a+b);
    return s;
}
function multiply(a,b){
    let s = (r<0.2) ? (a+b) :(a*b);
    return s;
}
function sub(a,b){
    let s = (r<0.2) ? (a/b) :(a-b);
    return s;
}
function divide(a,b){
    let s = (r<0.2) ? (a**b) :(a/b);
    return s;
}

console.log(r)
let a = 7,b = 9;
console.log("Addition       : ", add(a,b))
console.log("Subtraction    : ", sub(a,b))
console.log("Multiplication : ", multiply(a,b))
console.log("division       : ", divide(a,b))
