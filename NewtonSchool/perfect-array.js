/*---------------------------------------------------------------------------------------------*/
/* Author: Abhishek Chauhan */
/* Newton School Question Of The Day : Perfect Array */
/* Time : Sat Apr 29 05:31:13 AM IST 2023 */
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
    BhagwatGeeta();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}


function BhagwatGeeta() {
    let n = readLine().split(' ').map(Number);
    let inputArray = readLine().split(' ').map(Number);
    let check = false;
    for (let i = 0; i < n; i++) {
        let x = Math.floor(Math.sqrt(inputArray[i]));
        if (x * x !== inputArray[i]) {
            check = true;
            break;
        }
    }
    console.log(check == true ? "Yes" : "No");
}
