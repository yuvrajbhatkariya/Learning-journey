const express = require("express")
const app = express()
const port = 3000

// This file or folder is public to everyone
// Middle Ware


app.use(express.static('public'))



// app.get ot app.post  or app.put ot app.delete(path.handler)

app.get('/',(req,res)=>{
  res.send("Hello World !");
})

app.get('/about',(req,res)=>{
  res.send("About us");
})

app.get('/Constact',(req,res)=>{
  res.send("Contact");
})

app.get('/Blogs',(req,res)=>{
  res.send("Our Bogs");
})

// app.get('/Blogs/intro-to-ml',(req,res)=>{
  //   res.send("Introduction to machine learning.");
  // })
  

  //  slug for multiple request (like blog1,blog2, blog3)
  app.get('/Blogs/:slugs',(req,res)=>{
    console.log(req.params)
    console.log(req.query)
    res.send(`Hello ${req.params.slugs} `);
  })

  // app.get('/Blogs/:slugs/:second',(req,res)=>{
  //   res.send(`Under the blog ${req.params.second} `);
  // })

app.listen(port,()=>{
  console.log(`example ${port}`);
})