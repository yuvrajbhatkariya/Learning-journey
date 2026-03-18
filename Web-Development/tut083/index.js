// 1.Sorting hat 

// function magical_hat(students,houses){
//     for (const student of students) {
//         if(student.length<6){
//             houses.push("Gryffinder")
//         }
//         else if(student.length<8){
//             houses.push("Hufflepuff")
//         }
//         else if(student.length<12){
//             houses.push("Ravenclaw")
//         }
//         else{
//             houses.push("slytherin")
//         }
//     }
// }
// let houses = []
// let students = ["Parv","zoro","sanji","Luffy","Franky","Prometeus","Doflamingo","Hancock","shirahoshi","thiruvananthapuram"]
// magical_hat(students,houses)
// console.log(houses)



// 2 Double: -

// function double_trouble(arr){
//     for(let i = 0;i<arr.length;i++){
//         if(arr[i] == arr[i+1]){
//             arr[i] = arr[i]*2;
//             i++;
//         }
//         else{
//             arr[i] = arr[i]*2;
//         }
//     }
// }
// let arr =[6,7,7,8,2]
// double_trouble(arr)
// console.log(arr)



//3. Mirror images : -

// function mirror(mirror_arr,name){
//     let str = "";
//     let n = name.length-1;
//     for(let i = n;i>=0; i--){
//         str = str + name[i];
//     }
//     mirror_arr.push(str);
// }
// mirror_arr = []
// mirror(mirror_arr,"Ayush")
// console.log(mirror_arr)
// mirror(mirror_arr,"Pushpa")
// console.log(mirror_arr)




// 4. Password durability checker: -

// function char_check(password) {
//     if (password.length < 7) {
//         return true
//     }
//     else {
//         return false
//     }
// }
// function having_num(password) {
//     let s = '0';
//     let e = '9'
//     for (let i = 0; i < password.length; i++) {
//         if (((password[i].charCodeAt(0)) >= s.charCodeAt(0)) && ((password[i].charCodeAt(0)) <= e.charCodeAt(0))) {
//             return false;
//         }
//     }
//     return true;
// }
// function check_upperCase(password) {
//     let s = 'A'
//     let e = 'Z'
//     for (let i = 0; i < password.length; i++) {
//         if (((password[i].charCodeAt(0)) >= s.charCodeAt(0)) && ((password[i].charCodeAt(0)) <= e.charCodeAt(0))) {
//             return false;
//         }
//     }
//     return true;
// }

// function check_LowerCase(password) {
//     let s = 'a'
//     let e = 'z'
//     for (let i = 0; i < password.length; i++) {
//         if (((password[i].charCodeAt(0)) >= s.charCodeAt(0)) && ((password[i].charCodeAt(0)) <= e.charCodeAt(0))) {
//             return false;
//         }
//     }
//     return true;
// }
// function check_SpecialChar(password) {
//     for (let i = 0; i < password.length; i++) {
//         if ((((password[i].charCodeAt(0)) >= 33) && ((password[i].charCodeAt(0)) <= 47)) || ((password[i].charCodeAt(0)) >= 58) && ((password[i].charCodeAt(0)) <= 64)  || ((password[i].charCodeAt(0)) >= 91) && ((password[i].charCodeAt(0)) <= 96)) {
//             return false;
//         }
//     }
//     return true;
// }
// function password_durablity(password) {
//     if (char_check(password)) {
//         console.log("Password is too small")
//         console.log('Password should be atleast 7 character');
//     }
//     else if (having_num(password)) {
//         console.log("You password is weak!, Please include numbers")
//     }
//     else if (check_upperCase(password)) {
//         console.log("You password is weak!, Please include atleast one upper case letter")
//     }
//     else if (check_LowerCase(password)) {
//         console.log("You password is weak!, Please include atleast one Lower case letter")
//     }
//     else if (check_SpecialChar(password)) {
//         console.log("You password is weak!, Please include one Special Character.")
//     }

//     else {
//         console.log('Your password is strong.');
//     }
// }
// password_durablity("YUVRAi67?")


// 4. Local data storage : -

// if(localStorage.getItem("name")){
//     let a = localStorage.getItem("name");
//     document.querySelector(".hero").innerHTML = `Welcome ${a}`;
// }
// else{
//     let a = prompt("Enter your name: ");
//     localStorage.setItem("name",a)
//     document.querySelector(".hero").innerHTML = `Welcome ${a}`;
// }
// console.log('Yuvraj');


// We can only store string in localstorage: 
console.log(user);

var user = {
    name : "yuvraj",
    age : 21
}
console.log(user);

user = JSON.stringify(user)
console.log(user);

localStorage.setItem("str",user)

localStorage.getItem("str")

console.log("str")

user = JSON.parse(localStorage.getItem("str"))

console.log(user)




