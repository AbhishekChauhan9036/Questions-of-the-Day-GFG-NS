process.stdin.resume();
process.stdin.setEncoding('utf8');
var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;
process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    TestCase();
});

const readLine = function () {
    return input_stdin_array[input_currentline++];
}


const TestCase = function () {
    const [num1, num2, num3] = readLine().split(' ').map(Number);
    const maxNum = Math.max(num1, num2, num3);
    const isTie = (num1 === maxNum) + (num2 === maxNum) + (num3 === maxNum) > 1;
    const u = num1 === maxNum ? isTie : maxNum + 1 - num1;
    const v = num2 === maxNum ? isTie : maxNum + 1 - num2;
    const w = num3 === maxNum ? isTie : maxNum + 1 - num3;
    console.log(Number(u), Number(v), Number(w));
}
