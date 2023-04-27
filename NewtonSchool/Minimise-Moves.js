/*---------------------------------------------------------------------------------------------*/
/* Newton School Question Of The Day : Minimise Moves */
/* Time : Thu Apr 27 05:37:33 AM IST 2023 */
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
     var [num1, num2, num3, num4] = readLine().split(' ').map(Number);
     if (num2 > num4 || num3 - num1 > num4 - num2) {
          process.stdout.write(`${-1}`)
     } else {
          process.stdout.write(`${(num1 - num3) + 2 * (num4 - num2)}`)
     }
}
