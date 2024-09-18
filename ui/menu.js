// Funcion to save the selected Airline license

document.getElementById("save-setting").addEventListener("click", function() {
    var selectedAirline = document.getElementById("airline").ariaValueMax;

    localStorage.setItem("selectedAirline", selectedAirline);

    alert("License for " + selectedAirline + " saved succesfully!")


});