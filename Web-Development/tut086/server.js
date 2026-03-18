// const { createServer } = require('node:http');

// const hostname = '127.0.0.1';
// const port = 3000;

// const server = createServer((req, res) => {
//   res.statusCode = 200;
//   res.setHeader('Content-Type', 'text/plain');
//   res.end('Hey Vednesday !');
// });

// server.listen(port, hostname, () => {
//   console.log(`Server running at http://${hostname}:${port}/`);
// });


// 1.Named import : -

// import {a,b,c} from "./mu.js"
// console.log(a,b,c)

// 2.Default import: -
// import harry from "./mu.js"
// console.log(harry)

// Expor with help of require 

const a = require('./mu2.js')
console.log(a,__dirname,__filename)