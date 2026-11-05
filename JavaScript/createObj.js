const user = {
    name: "Anuj Kumar",
    age: 24,
    city: "Hyderabad"
}


console.log(user);


user.name = "Anuj Gahra";
console.log(user);


user.profession = "Software Engineer";
console.log(user);

// Explain why these modifications are allowed.
// These modifications are allowed because the `user` object is defined using the `const` keyword, which means that the reference to the object cannot be changed (i.e., you cannot reassign `user` to a different object). However, the properties of the object itself can still be modified.

// const user = {
//     name: "Anuj Kumar",
//     age: 24,
//     city: "Hyderabad"
// }
// console.log(user); // SyntaxError: Identifier 'user' has already been declared
