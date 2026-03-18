
const fs = require("fs")

console.log("starting")

// wait untils task is done:-

// fs.writeFileSync("ved.txt","Hello i am vednesday !!!!!!!")


// Initialise but not wait for complition : -

fs.writeFile("ved2.txt","You can't find me.",()=>{
    console.log("done")
    fs.readFile("ved2.txt",(error,data)=>{
        console.log(error, data.toString())
    })
})


fs.appendFile("ved2.txt", "feloo",(e,d)=>{
    console.log(d)
})

console.log("ending")