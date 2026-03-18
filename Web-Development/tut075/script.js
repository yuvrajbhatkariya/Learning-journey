// Asynchronous nature of JavaScript : -

// console.log("hello !!")
// console.log("hi, how are you !!")
// setTimeout(()=>{
//     console.log("I am inside the time box")
// },2000)
// console.log('The end !!!');

const callback = (arg,fn)=> {
    console.log(arg);
    fn();
}
const loadscript = (src ,callback)=> {
    let sc = document.createElement("script");
    sc.src= src;
    const fn = () => {
        console.log("potter")
    }
    sc.onload = callback("Harry",fn)
    document.head.append(sc)
   
}

loadscript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js", callback)
