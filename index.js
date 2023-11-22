function sum(n) {
    let result = n;

    result = result - Math.floor(result / 100) * 100;

    result = result - Math.floor(result / 50) * 50;

    result = result - Math.floor(result / 20) * 20;

    result = result - Math.floor(result / 10) * 10;


    return result;
}

console.log(sum(489))
console.log(sum(429))









