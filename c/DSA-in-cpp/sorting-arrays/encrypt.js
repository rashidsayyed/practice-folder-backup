function encrypt(mystring) {
    var newvalueleft= "";
    var newvalueright= "";
    for(var i=0;i<=mystring.length-1;i++){
        newvalueleft += mystring[0];
        newvalueleft += mystring[mystring.length-1];
   
    newvalueright = mystring.slice(1,-1)
    mystring = newvalueright
}
    return newvalueleft+mystring;
}
var mystring = "hlooldrwle"
var newvalue ="";

    newvalue = encrypt(mystring)

console.log(newvalue)