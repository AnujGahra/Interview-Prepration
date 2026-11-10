// Write a recursive function that:
// - Accepts a number.
// - Prints numbers from that number down to 1.
// - Prints "Completed" after reaching 0.

function printNumbers(num) {
    if (num <= 0) {
        console.log("Completed");
        return;
    }
    printNumbers(num - 1);
    console.log(num);
}

// Example usage
printNumbers(5);

