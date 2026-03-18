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

let boxes = document.getElementsByClassName("box");

for (let i = 0; i < boxes.length; i++) {
  boxes[i].style.backgroundColor = "lightblue";
}

