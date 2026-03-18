 
 
let prom1 = new Promise((resolve ,reject) =>{
    let r = Math.random();
    if(r<0.5){
        reject("Request 1 is rejected");
    }
    else{
        setTimeout(()=>{
            console.log("request1 is accepted")
            resolve("Resolve 1")
        },1000);
    }
})

let prom2 = new Promise((resolve ,reject) =>{
    let r = Math.random();
    if(r<0.5){
        reject("Request 2 is rejected");
    }
    else{
        setTimeout(()=>{
            console.log("request 2 is accepted")
            resolve("Resolve 2")
        },2000);
    }
})
let prom3 = new Promise((resolve ,reject) =>{
    let r = Math.random();
    if(r<0.5){
        reject("Request 3 is rejected");
    }
    else{
        setTimeout(()=>{
            console.log("request 3 is accepted")
            resolve("Resolve 3")
        },3000);
    }
})
let prom4 = new Promise((resolve ,reject) =>{
    let r = Math.random();
    if(r<0.5){
        reject("Request 4 is rejected");
    }
    else{
        setTimeout(()=>{
            console.log("request 4 is accepted")
            resolve("Resolve 4")
        },4000);
    }
})

let prom5 = new Promise((resolve ,reject) =>{
    let r = Math.random();
    if(r<0.5){
        reject("Request 5 is rejected");
    }
    else{
        setTimeout(()=>{
            console.log("request 5 is accepted")
            resolve("Resolve 5")
        },5000);
    }
})

// prom1.then((a) =>{
//     console.log(a);
// }).catch((err)=>{
//     console.log(err)
// })


// let p = Promise.all([prom1,prom2,prom3,prom4,prom5])
// let p = Promise.allSettled([prom1,prom2,prom3,prom4,prom5])
// let p = Promise.race([prom1,prom2,prom3,prom4,prom5])
// let p = Promise.any([prom1,prom2,prom3,prom4,prom5])
// let p = Promise.resolve([prom1,prom2,prom3,prom4,prom5])
let p = Promise.reject([prom1,prom2,prom3,prom4,prom5])
p.then((a) =>{
    console.log(a);
}).catch((err)=>{
    console.log(err)
})