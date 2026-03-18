const path = require('path');
const fs = require("fs");
// const { error, dir } = require('console');

const dirpath = path.join(__dirname, "Directory");

// Reading Directory:-
fs.readdir(dirpath, (err, files) => {
    if (err) {
        return console.error("Eerror reading", err);
    }

    // Reading Files :-
    files.forEach(file => {
        const ext = path.extname(file).toLocaleLowerCase().slice(1);
        console.log(`File :  ${file}`, `Extension : ${ext}`)

        const newdir = path.join(dirpath, ext)
        // Create a file by extension name:-
        if (!fs.existsSync(newdir)) {
            fs.mkdirSync(newdir, { recursive: true });
            console.log("Folder created : ", newdir)
        }
        else {
            console.log("Folder already exists:", newdir);
        }

        // Move a file from extension name foder:-.
        const oldpath = path.join(dirpath, file)
        const newpath = path.join(newdir, file)

        fs.rename(oldpath, newpath, (err) => {
            if (err) {
                console.error("Error moving file:", err);
            } else {
                console.log("File moved successfully!");
            }
        })
    })

})

