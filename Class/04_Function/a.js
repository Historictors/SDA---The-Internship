
function swap(a,b){
    let temp =a
    a =b;
    b =temp;

    return {a:a,b:b}
}

let a =10;
let b=12;

let result =swap(a,b);
a= result.a
b =result.b
