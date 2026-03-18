// console.log("Hello")

// obj= {
//     a : 1,
//     b : "yuvraj"
// }

// // console.log(obj.a)
// console.log(obj)


// let animal = {
//     eats : true
// };

// let cat = {
//     sleep : true
// }

// // Use prototype : -

// console.log(cat.eats)
// cat.__proto__ = animal;   // make 
// console.log(cat.eats)



//  Class in JavaScript: -
class animal{
    constructor(){
        // this.name = name;
        // console.log(name)
        console.log('Constructor of animal is called.');
    }
    eats(){
        console.log('Animal eats');
    }
    jump(){
        console.log('It can Jump');
    }
}

// Inheritance in class

class lion extends animal{
    
    constructor(name){
        super()
        this.name = this.name;
        console.log("Constructor of Lion");
    }
    roar(){
        console.log('Roar.............');
    }
}



// let a = new animal("Vednesday");
// console.log(a)
// console.log(a.eats());
// console.log(a.jump());
// console.log(a.name);

let l = new lion("Shera");
l.eats()
l.roar()

