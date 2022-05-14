// let js = "amazing";
// if (js === "amazing") alert("lets do the java boss");

console.log(30 + 20 - 10);
console.log("happy");

let firstname = "Avijit";
console.log(firstname);

let myCourse = "mechnical";
let myDream = "programming";
console.log(myCourse);
console.log(myDream);

//bolline value of the
let javascript = true;
console.log(javascript);
console.log(typeof javascript);
console.log(typeof 69);
console.log(typeof 'happpy');
javascript = "fun";
console.log(javascript);

let year;
console.log(year);
console.log(typeof year);
year = 2000;
console.log(year);
console.log(typeof year);

console.log(typeof null);

//Basic operators

const saal = 2022;
const happy = saal - 2000;
const sara = saal - 2004;
console.log(happy);
console.log(sara);
console.log(sara, happy);

console.log(happy * 2, sara - 2, sara ** 2, 3 ** 2);
//3**2 = 3*3*3 :-)

//join two string into one string
const first = 'java ';
const sccond = 'script';
console.log(first + sccond);

let x, y;
x = y = 20 - 10 - 10;
console.log(x, y);

const averageAge = (happy + sara) / 2;
console.log(averageAge);

console.log('CODING CHALLENGE 1');

const marksWeight = 78;
const markHeight = 1.69;
const jonesWeight = 95;
const jonesHeight = 1.88;

const bmimark = marksWeight / markHeight ** 2;
const bmijones = jonesWeight / (jonesHeight / jonesWeight);
console.log(bmijones, bmimark);
console.log(bmijones < bmimark);

console.log(" ADD MULTIPLE STRING ");
const name = 'kavin'
const job = 'programmer';
const Byear = '2000';
const Cyear = '2020';
const kavin = "I'm " + firstname + ',my age ' + (Cyear - Byear) + ' and i am a ' + job;
console.log(kavin);
console.log(`have
a
great journey`);
const age = 14;
if (age >= 18) {
    console.log("Dost you can enjoy ");

} else {
    [
        console.log("sorry bro")
    ]
}

//type conversion
const testyear = '2000';
console.log(Number(testyear));
console.log(Number(testyear) + 18);
console.log(Number('ballu'));
console.log(typeof (NaN));
console.log(String(23), 23);
console.log(typeof (String(23)));
console.log(23);

//type coresion
console.log('I am ' + 21 + ' years old '); //convert num to string
console.log('23' + 11 + '11'); //but this is all strings
console.log('23' - 11 - '11'); //For "-" all string convert to num
let n = '1' + 1;
n = n - 1;
console.log(n);

console.log(Boolean(0));
console.log(Boolean(undefined));
console.log(Boolean('console'));
console.log(Boolean(({})));
console.log(Boolean(''));

const money = 0;
if (money) {
    console.log("this is false ")
} else {
    console.log("This is false so this is will be output")
}
let undefinedname = 0;
if (undefinedname) {
    console.log("Bro this is not output");
} else {
    console.log("this is the output");
}

//const chack = Number(prompt("tyoe a number "));
// console.log(chack);
// console.log(typeof chack);
// if (chack === 56) {
//     console.log("This is the number");
// }

const hascoding = false;
const hasskill = true;

console.log(hascoding && hasskill);
console.log(hascoding || hasskill);

const day = 'satarday';
switch (day) {
    case 'satarday': // day===console call ;
        console.log('starting of all day');
        break;
    case 'tuesday':
        console.log('visit to manali');
        break;
    case 'wednesday':
    case 'friday':
        console.log('time to stay with manali');
        break;
    case 'satarday':
        console.log('half day');
    case 'sunday':
        console.log('this is the fun day');
    default:
        console.log('not a valid day');
        break;
}
