/*---------------------------------------------------------------------------------------------*/
/* Newton School Question Of The Day :  Lit the Bulbs */
/* Time : Fri Apr 28 05::32 AM IST 2023 */
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
    var input = readLine();
    const charMap = new Map();
    let maxOccurrence = 0;
    for (let i = 0; i < input.length; i++) {
        const char = input.charAt(i);
        charMap.set(char, (charMap.get(char) || 0) + 1);
        maxOccurrence = Math.max(maxOccurrence, charMap.get(char));
    }
    if (maxOccurrence === 1 || maxOccurrence === 2) {
        console.log(4);
    } else if (maxOccurrence === 3) {
        console.log(6);
    } else {
        console.log(-1);
    }
}
