
let button = document.getElementById("btn")

//                       ||  MOUSE EVENTS  ||    

// Click: -
// button.addEventListener("click" ,()=>{
    //     document.querySelector(".box").innerHTML = "<b>Hey Buddy you cliced the button.</b>"
    //     alert("You cliked the button !!!!!!!")
    // })

// Double-Click: -
// button.addEventListener("dblclick" ,()=>{
    //     document.querySelector(".box").innerHTML = "<b>Hey Buddy you double-cliced the button.</b>"
    //     alert("You double-cliked the button !!!!!!!")
    // })

// Right-Click: -
// button.addEventListener("contextmenu" ,()=>{
//     document.querySelector(".box").innerHTML = "<b>Hey Buddy you right-cliced the button.</b>"
//     alert("You right-cliked the button !!!!!!!")
// })


// just move your mouse to the button : -
// button.addEventListener("mouseover" ,()=>{
//     document.querySelector(".box").innerHTML = "<b>Hey Buddy you double-cliced the button.</b>"
//     alert("You double-cliked the button !!!!!!!")
// })

// just move your mouse and if we move out it pop-up : -
// button.addEventListener("mouseout" ,()=>{
//     document.querySelector(".box").innerHTML = "<b>Hey Buddy you double-cliced the button.</b>"
//     alert("You double-cliked the button !!!!!!!")
// })

// mousedown/up : -

// button.addEventListener("mouseup" ,()=>{
//     document.querySelector(".box").innerHTML = "<b>Hey Buddy you double-cliced the button.</b>"
//     alert("You double-cliked the button !!!!!!!")
// })


//                       ||  KEYBOARD EVENTS  ||              


// button.addEventListener("keydown",(e)=>{
//     console.log(e)
// })
// button.addEventListener("keyup",(e)=>{
//     console.log(e)
// // })

// button.addEventListener("keypress",(e)=>{
//     console.log(e,e.key)
// })



//                       ||  FORM EVENTS  ||              

// document.getElementById("name").addEventListener("input", (e) => {
//     console.log("Typing:", e.target.value);
// });
// document.getElementById("password").addEventListener("input", (e) => {
//     console.log("Password:", e.target.value);
// });

// document.querySelectorAll('input[name="gender"]').forEach((elem) => {
//     elem.addEventListener("change", (e) => {
//         console.log("Selected Gender:", e.target.value);
//     });
// });


// document.getElementById("myForm").addEventListener("submit", (e) => {
//     e.preventDefault(); // Prevents page reload
//     let name = document.getElementById("username").value;
//     alert("Form submitted with: " + name);
// });



//                       ||  DOCUMENTS EVENTS  ||              

// 1. DOMContentLoaded – When the page is fully loaded (DOM ready)

// document.addEventListener("DOMContentLoaded", () => {
//     console.log("Page is fully loaded and DOM is ready.");
// });


// 2. Click Anywhere on Page

// document.addEventListener("click", (e) => {
//     console.log("You clicked on:", e.target);
// });

// 3. Scroll Event
// document.addEventListener("scroll", () => {
//     console.log("Page is scrolling...");
// });

