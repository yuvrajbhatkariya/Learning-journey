


// Using Reduce : -
function factorial(num) {
    let arr = [];
    let i = 1;
    if (num <= 0) {
        return 0;
    }
    while (i <= num) {
        arr.push(i)
        i++;
    }
    const fc = (a, b) => {
        return a * b;
    }
    let ans = arr.reduce(fc)
    return ans;
}

// using for loop : 
function fac(num) {
    if (num <= 0) {
        return 0;
    }
    let ans = 1;
    for (i = 1; i <= num; i++) {
        ans = ans * i;
    }
    return ans;
}


console.log(factorial(0))
console.log(fac(0))
