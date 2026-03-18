// Strings in JS: -

let a = "Happy Birthday"
let b = "Vednesday"
// console.log(a)
// console.log(a[4])                 // Give index : - 




// Escape sequence Characters : -

// let b = `"Happy Birthday"`          
// console.log(b)
// console.log("%%% " + a +" "+b + " %%%")
// console.log(`%%% ${a} ${b} %%%`)
// console.log(`happy\`happy`)
// console.log(`happy\nhappy`)
// console.log(`happy\thappy`)
// console.log(`happy\rhappy`)




//  String Properties and Methods : -

console.log(a.length)            // Give length : -
console.log(a.toUpperCase())
console.log(a.toLowerCase())
console.log(a.slice(1,5))       // Print in that range (One is included and 5 is not )
console.log(a.slice(2))
console.log(a.replace("Birthday","Anniversary"))
console.log(a.concat(" ",b))
let p = a.concat(" ",b,"Sunday", "Friday ", "Ed")
console.log(p)
let x = " happy       "
console.log(x.trim())