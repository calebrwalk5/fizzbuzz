/* 
FizzBuzz in Javascript
Written by calebrwalk5 (aka anusO1)
*/

function main() {
  for (var i=1; i<=100; i++) {
  var output = "";
      if (i % 15 == 0) {
        output = "FizzBuzz";
      }
      else if (i % 5 == 0) {
        output = "Buzz";
      }
      else if (i % 3 == 0) {
        output = "Fizz";
      }
      else {
        output = i;
      }
  console.log(output);
  }
}

main();
