// Write a program with three functions:
// - login()
// - validateUser()
// - fetchUserData()

// Output
// Login started
// Validating user
// Fetching user data
// User data received
// Login completed

function login(username, password) {
    console.log("Login started");
    validateUser(username, password);

}

function validateUser(username, password) {
    console.log("Validating user");
    // Simulating user validation
    if (username === "admin" && password === "password") {
        fetchUserData();
    } else {
        console.log("Invalid credentials");
    }
}

function fetchUserData() {
    console.log("Fetching user data");
    // Simulating fetching user data
    setTimeout(() => {
        console.log("User data received");
        console.log("Login completed");
    }, 1000);
}

// Example usage
login("admin", "passwordd");

