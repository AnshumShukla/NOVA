function checkInp() {
    var x = document.forms["signup-form"]["phone"].value;
    if (x.length !== 10) {
        alert("Enter correct phone number!")
        return false;
    }
}