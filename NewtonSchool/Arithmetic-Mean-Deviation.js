/*---------------------------------------------------------------------------------------------*/
/* Author: Abhishek Chauhan */
/* Newton School Question Of The Day : Arithmetic Mean Deviation */
/* Time : Sun Apr 30 05:32:08 AM IST 2023 */
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
    let [p1, p2, p3] = readLine().split(' ').map(Number);
    p2 *= 2;
    p1 += p3;
    const d = Math.abs(p1 - p2);
    console.log(d % 3 === 0 ? '0' : '1');
}
