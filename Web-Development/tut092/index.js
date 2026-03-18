const express = require("express")
const app = express()
const port = 3000

app.set('view engine','ejs')

app.get('/',(req,res) =>{
    let sitename = "I don't Know !!";
    let brand = "Abibass"
    // res.sendFile("templates/index.html",{root:__dirname})
    res.render("index",{sitename:sitename,brand:brand})

})
app.listen(port,()=>{
    console.log(`App is listening on port ${port}`)
})