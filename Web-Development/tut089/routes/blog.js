const express = require('express')
const router = express.Router()

router.get('/', (req, res) => {
  res.send('Blog home page')
})
router.get('/about', (req, res) => {
  res.send('blog About birds')
})
router.get('/blogpost/:slug',(req,res)=>{
    res.send(`Blog ke andar ${req.params.slug}`)
})

module.exports = router

