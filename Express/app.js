const express = require('express')
const path =require('path')
const app  = express()
const port = 80;

//for serving static file

app.use('/static', express.static('static'))
app.set('view engine', 'pug');
app.set('views',path.join(__dirname,'views'))
app.get('/demo',(req,res)=>{
    // res.status(200).render('demo',{title : "swaraj", message : "What is your name"})
    res.status(200).render('index',{title : 'swaraj', content : 'What is your name'})
    // res.status(200).render('identy');
})

app.get("/", (req,res)=>{
    res.send("this is my first express app with swaraj")
});
app.get("/about", (req,res)=>{
    res.send("this is my first express app with swaraj")
});
app.get("/home", (req,res)=>{
    res.send("this is my fast home")
});
app.get("/contact", (req,res)=>{
    res.send("Contact with me")
});


app.listen(port, ()=>{
    console.log(`Application successfully start on port ${port}`)
})