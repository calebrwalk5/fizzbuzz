/* 
FizzBuzz in Javascript
Written by calebrwalk5 (aka anusO1)
*/

function main() {
  var result = "FizzBuzz Game";
  console.log(result)
  for (var i = 1; i <= 100; i++) {
      if (i % 15 == 0) {
        result = "FizzBuzz";
      }
      else if (i % 5 == 0) {
        result = "Buzz";
      }
      else if (i % 3 == 0) {
        result = "Fizz";
      }
      else {
        result = i;
      }
  console.log(result);
  }
}

main();
