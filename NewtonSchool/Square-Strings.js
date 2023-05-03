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
    const inputString = readLine();
    let isPalindrome = true;
    if (inputString.length % 2 !== 0)
        isPalindrome = false;
    else {
        for (let i = 0; i < inputString.length / 2; i++) {
            if (inputString[i] !== inputString[i + (inputString.length / 2)]) {
                isPalindrome = false;
                break;
            }
        }
    }
    console.log(isPalindrome == true ? "Yes" : "No");
}
