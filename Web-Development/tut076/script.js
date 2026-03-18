// async function getdata() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve(404);
//         }, 3500)
//     })
// }


async function getdata() {
//     try {
//         let x = await fetch('https://jsonplaceholder.typicode.com/todos/1');
//         let data = await x.text();
//         console.log(data);
//         return 404;
//     }
// catch (err) {
//     console.error("Error fetching data:", err);
//     return null; // or return custom fallback
// }
let x = await fetch('https://jsonplaceholder.typicode.com/todos/1');
        let data = await x.text();
        console.log(data);
        return 404;
}



// console.log("starting ......")
// console.log("Doing some work")
// console.log("Some other work")
// console.log("load data ....")
// let data = getdata()
// console.log(data)

// ****** -->  if we want to wait for data to load is : -


// 1.
// data.then((v) =>{
//     console.log("data : ",v)
//     console.log("process data ......")
//     console.log("other task")
//     console.log('ending.......');
// })




// 2. use async or await:(await usn inside tha async function) -
async function main() {
    console.log("starting ......")
    console.log("Doing some work")
    console.log("Some other work")

    console.log("load data ....")
    let data = await getdata()

    console.log(data)

    console.log("process data ......")
    console.log("other task")
    console.log('ending.......');
}

main()