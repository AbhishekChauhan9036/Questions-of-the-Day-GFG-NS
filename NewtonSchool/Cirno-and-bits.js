/*---------------------------------------------------------------------------------------------*/
/* Author: Abhishek Chauhan */
/* Newton School Question Of The Day : Cirno and Bits */
/* Time : Wed Apr 26 05:31:51 AM IST 2023 */
/* GitHub Id: https://github.com/AbhishekChauhan9036 */
/* Language: Node.Js */
/*---------------------------------------------------------------------------------------------*/

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
    main();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}


function main() {
    var [userInput] = readLine().split(' ').map(Number);
    if (userInput === 1) {
        console.log("3");
    } else if (userInput % 2 === 1) {
        console.log("1");
    } else {
        let result = 1;
        while (userInput % 2 === 0) {
            userInput /= 2;
            result *= 2;
        }
        let temp = userInput === 1;
        console.log(result + temp);
    }
}
