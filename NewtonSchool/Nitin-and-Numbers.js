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
	const input = readLine();
	let maxDigit = -Infinity;
	for (let i = 0; i < input.length; i++) {
		let digit = parseInt(input[i], 10);
		if (digit > maxDigit) {
			maxDigit = digit;
		}
	}
	console.log(maxDigit);
}
