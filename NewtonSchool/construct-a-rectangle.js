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
    const a = readLine().split(' ').map(Number);
    a.sort((a, b) => a - b);
    if (a[0] + a[1] === a[2])
        console.log("Yes");
    else if (a[0] === a[1] && a[2] % 2 === 0)
        console.log("Yes");
    else if (a[1] === a[2] && a[0] % 2 === 0)
        console.log("Yes");
    else
        console.log("No");
}
