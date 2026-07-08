#!/bin/bash

#!/bin/bash

function greet {
    echo "Hello, Welcome to Shell Scripting!"
}

greet




add() {
    sum=$(( $1 + $2 ))
    echo "Sum = $sum"
}

add 10 20




add() {
    return $(( $1 + $2 ))
}

add 10 20

echo "Result = $?"



add() {
    echo $(( $1 + $2 ))
}

result=$(add 15 25)

echo "Sum = $result"


#!/bin/bash

showArgs() {
    echo "First Argument : $1"
    echo "Second Argument: $2"
    echo "Total Arguments: $#"
    echo "All Arguments  : $@"
}

showArgs Java C++ Python
