<?php
$servername = "mysql.hostinger.in";
$username = "u364666591_milan";
$password = "nightfury";
$dbname = "u364666591_fbook";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$sql= "INSERT INTO fbook (name, nickname, email, birthday, gender, class, college, branch, address, mobile, met, impression, aboutme, date)
VALUES ('$_POST[name]', '$_POST[nickname]', '$_POST[email]', '$_POST[birthday]', '$_POST[gender]', '$_POST[class]', '$_POST[college]', '$_POST[branch]', '$_POST[address]', '$_POST[mobile]', '$_POST[met]', '$_POST[impression]', '$_POST[aboutme]', CURRENT_TIMESTAMP)";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>