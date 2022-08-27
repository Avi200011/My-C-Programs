'use strict'
let driverspeople=false;;
const pass=true;
if(pass)driverspeople=true;
if(driverspeople)console.log("you can pass");
//function
function apple()
{
    console.log("I'm the great one ");
}
apple(); //calling function
apple();
function consert(pritibi , fooisles)
{
    console.log(pritibi,fooisles);
    const band=`band with pithibi at ${pritibi} and fossils at ${fooisles}`;
    return band;
    
}
function Date(free,busy)
{
    console.log(free,busy);
    const time=`I free on the date of ${free} and busy at the date of the ${busy}`;
    return time;
}
consert(22,11);
const bandtimeing=consert(21,22);
console.log(bandtimeing);

const datetime=Date(14,21);
console.log(datetime);
//short process
console.log(Date(23,25));
