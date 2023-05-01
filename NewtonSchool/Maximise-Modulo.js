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
    const [left, right] = readLine().split(' ').map(Number);
    console.log((right < left * 2 ? right - left : parseInt((right - 1) / 2)));
}
