//console.log("Hello world")

//let x = 12345;
//let y = "hello"
//const a = 13445
//var c
//let b
//x = 111
//
//console.table([x,y,a,b,c])

// const cannot be changed a = 12
// var is not used due to scope resolution faults
//
//const fxn = function(){
//    console.log("Hello World!");
//}
//
//const heros = ["ABC","123","nrcb3423"];
//
//let myObj = { 
//    name: "Muktesh",
//    age: "22",
//}
//
//console.log(fxn);
//console.log(heros);
//console.log(myObj);

// stack(primitive), heap(non-primitive) datatype storage method

//console.log(typeof null);
//const bigNum = 46723864873649843n;
//console.log(bigNum +" "+ typeof(bigNum));
//console.log(typeof fxn);

// stack -> reference of copy is given 
// heap -> reference of actual object is given

// let a = 10; let b = a;
// console.log(a); console.log(b);  

// let userOne = {
//    email : "anbcej",
//    upi : "kdabkb"
//}


// let userTwo = userOne;
// userTwo.email = "hello"
// email for both userone and usertwo is changed
//
//console.log(userOne);
//console.log(userTwo);


// console. log (name + repoCount + " Value");
// STRING INTERPOLATION :==>  
//let name = "nvjkntvnjt"
//const repoCount = 111;
//console. log (`Hello my name is ${name} and my repo count is ${repoCount}`);

// .length , .charAt() , .indexOf() , .toUpperCase() 
// .slice(-2,8) can be -ve indexed
// .substr() +ve indexed
// .trim() , .replace()


// NUMBERS
// .toString() , .toPrecision() // .toFixed() , .toLocaleString


//console. log (Math. floor (Math. random () * (max - min + 1)) + min)
//console.log(Math.floor(Math.random()*10) +1 );

//let myDate = new Date()
// console. log(myDate.toString());
// console. log(myDate.toDateString());
// console. log(myDate.toLocaleString());
// console. log(typeof myDate);
// let myCreatedDate = new Date(2023, 0, 23)
//let myCreatedDate = new Date (2023, 0, 23, 5, 3)
//let myCreatedDate = new Date("01-14-2023")
//console. log (myCreatedDate.toLocaleString())

//let myTimeStamp = Date.now()
// console. log (myTimeStamp) ;
// console. log(myCreatedDate.getTime());
//

// SLICE and SPLICE in array
//const myn2 = myArr. splice (1, 3)   // deletes from idx 1 to 3;

// const marvel_heros = ["thor","ironman","spiderman"]
// const dc_heros = ["superman","flash","batman"]
// marvel_heros.push(dc_heros)
// console.log(marvel_heros);
// 
// const allHeros = marvel_heros.concat(dc_heros)
// const all_new_heros = [...marvel_heros, ...dc_heros]
// console.log(all_new_heros);

// const another_array = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]]
// const real_another_array = another_array.flat(Infinity)
// console.log(real_another_array);


// console.log(Array.isArray("Hitesh"))
// console.log(Array.from("Hitesh"))
// console.log(Array.from({name: "hitesh"})) // interesting
// console.log (Array.of(scorel, score2, score3));

// Object Singleton(single object)     // Object Literals(multiple instances)

// const sym = Symbol("key1")
// const MBjs = {
//     name : "Muktesh" ,
//     email : "abc@123" ,
//     "single num" : 111 ,
//     [sym] : "keyChange" 
// };
// 
// console.log(MBjs.name);         
// console.log(MBjs["single num"]);
// console.log(typeof MBjs["single num"]);
// 
// console.log(typeof sym); 
// console.log(sym); 
// console.log(MBjs[sym]);
// 
// MBjs.greeting = function(){
//     console.log(`Hello ${this.name} Javascript user.`);
// }
// console.log(MBjs.greeting()); 


// Singleton Object :   const tinderUser = new Object();   OR     const tinderUser = {};
// const tinderUser = {};
// tinderUser.id = 11;
// tinderUser.name = "Bodkhe"
// tinderUser.isLoggedIn = false
// console.log(tinderUser);
// 
// const obj1 = {1: "a", 2:"b"}
// const obj2 = {2: "c", 3:"d"};
// const obj3 = { obj1, obj2 }
// const obj4 = Object.assign( {} , obj1, obj2 )   // assign values of obj1,obj2 into new empty object memory
// const obj5 = Object.assign( obj1, obj2 )        // assign values of obj2 into obj1 
// MOST PREFFERED
// const obj6 = { ...obj1 , ...obj2 };

// console.log(obj3); console.log(obj4); console.log(obj5); console.log(obj6);

// console.log(Object.keys(tinderUser));       // returns an array containing keys of Object
// console.log(Object.values(tinderUser));


// OBJECT DESTRUCTURING
// const course = {
//   coursename: "js in hindi",
//   price: "999" ,
//   courseInstructor: "hitesh"
// }
// 
// const {courseInstructor: instructor} = course;
// console.log(instructor);





// JSON FORM OF API
// {
//     "name": "hitesh"
//     "coursename": "js in hindi",
//     "price": "Free"
// }

// ARRAY FORM OF API
// [
//     {},
//     {},
//     {}
// ]




