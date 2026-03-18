import path from "path"

let my_path = "/Users/yuvrajbhatkariya/Documents/GitHub/Learning/Web-Development/ved2.txt"

// find the extenstion
console.log(path.extname(my_path))

// give full path
console.log(path.dirname(my_path))

// base file name
console.log(path.basename(my_path))

// join path

console.log(path.join("/Users/yuvrajbhatkariya/Documents/GitHub/","Learning\\Web-Development\\tut087\\aboutpath.js"))