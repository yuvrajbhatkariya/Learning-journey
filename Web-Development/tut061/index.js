// Solution of Exercise : 9

// let result = eval("2 + 3 + 4");
// console.log(result);





let random = Math.random()
console.log(random)
let a = prompt("Enter first no")
let b = prompt("Enter operation you want to do")
let c = prompt("Enter second no")


let o = {
    "+": "-",
    "-": "/",
    "*": "+",
    "/": "**"
}
console.log(random)
if (random > 0.2) {
    console.log(`The result is ${a} ${b} ${c}`)
    alert(`The result is ${eval(`${a} ${b} ${c}`)}`)
}
else {
    b = o[b]
    alert(`The result is ${eval(`${a} ${b} ${c}`)}`)
}