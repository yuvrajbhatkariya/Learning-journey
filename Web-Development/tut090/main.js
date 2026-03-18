const express = require("express")
const app = express()
const port = 3000
const fs = require("fs")


// Middleware :-
// app.use(express.static("public"))

app.use((req,res,next)=>{
    console.log("Middleware1")
    console.log(req.headers)
    req.harry = "Hey i am here";            // Modification of request can be done
    fs.appendFileSync("log.txt" ,`${Date.now()} is a ${req.method}\n`)
    // res.send("Hacked by middleware1")      // if we send response here than we don't wnat send to the othe middleware
    next();
})
app.use((req,res,next)=>{
    console.log("Middleware2")
    next();
})

app.get("/",(req,res)=>{
    res.send("Hello World !!!");
})

app.get('/about',(req,res)=>{
    res.send("Helo about " + req.harry)
})

app.listen(port ,()=>[
    console.log(`Example app listening on port ${port}`)
])