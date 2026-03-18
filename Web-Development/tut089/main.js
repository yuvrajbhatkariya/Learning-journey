const express = require('express')
const app = express()
const port =  3000
const blog = require('./routes/blog')



app.use(express.static('public'))
app.use('/blog', blog)

// Simple implimentation of get,post,put and delete function checking using html page: -

app.get('/',(req,res)=>{
    res.send("Hello World !!!")
})

app.post('/',(req,res)=>{
    console.log("Hey its a post request")
    res.send("I am sending the post ")
})

app.put('/',(req,res)=>{
    console.log("Hey its a put request")
    res.send("I am update ")
})

// Rendering anypage:-

app.get("/index",(req,res)=>{
    console.log("Hey it fetch the page");
    // res.send("Hey i am sending the fetch request to html")

    // to fetch the entire page :-
    res.sendFile('templates/index.html',{root : __dirname})     // it through error if you not give fulll path or root directory

})


app.get('/api',(req,res)=>{
    console.log("Hey i am calling the api")
    res.json({a:1,b:2,c:4,name:["Ved","sed"]})
})
app.listen(port ,()=>[
    console.log(`Example app listening on port ${port}`)
])