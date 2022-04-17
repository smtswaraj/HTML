const http = require('http');
const fs = require('fs');

const file = fs.readFileSync("yt.html");

const hostname = '127.0.0.1';
const port = 80;

const server = http.createServer((req, res)=>{
res.writeHead(200,{'Constant-Type': 'text/html'});
res.end(file);
})


server.listen(port,hostname,() => {
console.log(`Server running at http://${hostname}:${port}/`)
});
