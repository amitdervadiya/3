var n = document.getElementById("task").value
var priority = document.getElementById("priority").value

var table = document.getElement("tbody").value
var one = document.createElement("tr")
var f1 = document.createElement("td")
var f2 = document.createElement("td")

f1.innerText = n

f2.innerText = priority

one.appendChild(f1)
one.appendChild(f2)
table.appendChild(one)

function task(){
    
}