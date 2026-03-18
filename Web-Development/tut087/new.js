import fs from "fs/promises"

let a = await fs.readFile("ved.txt")

let b = await fs.appendFile("ved.txt","\n\n\n\n\nNice to meet you $$$")



console.log(a.toString(),b)