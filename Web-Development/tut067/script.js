console.log("Hi")


document.firstChild
document.body.childNodes
// NodeList(5) [text, div.container, text, script, text]
document.body.childNodes[1]
document.body.children
// HTMLCollection(2) [div.container, script]
let cont = document.body
cont.firstChild
// #text
cont.firstElementChild
cont.firstElementChild.childNodes[1]
cont.firstElementChild.childNodes[1].style
cont.firstElementChild.childNodes[1].style.background = "aqua"
cont.firstElementChild.childNodes[1].parentNode
cont.firstElementChild.childNodes[1].parentElement




// Searching the DOM


// 1. querySelectorAll :-

// let boxes = document.querySelectorAll(".box");
// boxes.forEach((box) => {
//   box.style.backgroundColor = "yellow";
// });


// 2. querySelector : -

// let el = document.querySelector("#main");
// el.style.color = "blue";


// 3. getElementsByTagName : -

// let paragraphs = document.getElementsByTagName("p");
// for (let i = 0; i < paragraphs.length; i++) {
//   paragraphs[i].style.color = "green";
// }

// 4 .getElementsByClassName ; -

// let boxes = document.getElementsByClassName("box");

// for (let i = 0; i < boxes.length; i++) {
//   boxes[i].style.backgroundColor = "lightblue";
// }

