console.log("Error Handelling >>>>>>>>>>>>>>>>");


let a = prompt("Enter a first number");

let b = prompt("Enter a second numbere");

//  Custom error : -

if (isNaN(a) || isNaN(b)) {
    // throw error("Syntax error");
    throw SyntaxError("Sorry you can't write this!")
}

let sum = parseInt(a) + parseInt(b);



// Handel error  when java script throw : -

// let x = 1;
// try {
//     console.log('The sum is : ', sum * x);
// }
// catch (error) {
//     console.log("Error unxpected");
// }
// finally {
//     console.log("All db files closed.")
// }


// Finally use case

function main() {
    // let x = 1
    try {
        return console.log('The sum is : ', sum * x);
    }
    catch (error) {
        return console.log("Error unxpected");
    }
    finally {
        console.log("All db files closed.")
    }
}

main()
