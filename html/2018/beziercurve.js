var y = 0;
var x1 = 10;
var x2 = 710;
function courbebezieranimated() {
  var id = document.getElementById("courbebezieranimated");
  var context = id.getContext("2d");

  //clear
  context.clearRect(0, 0, id.width, id.height);

  context.fillStyle =  "black";
  context.lineWidth = 1;
  context.beginPath();
  context.arc(x1, y, 7, 0, 2 * Math.PI);
  context.fill();
  context.beginPath();
  context.arc(x2, y, 7, 0, 2 * Math.PI);
  context.fill();

  //lignes
  context.beginPath();
  context.strokeStyle =  "red";
  context.lineWidth = 2;
  context.moveTo(10,20);
  context.lineTo(x1, y, 710, 20);

  //courbe
  context.moveTo(710,20);
  context.lineTo(x2, y, 710, 20);
  context.stroke();
  context.strokeStyle =  "#00b33c";
  context.lineWidth = 10;
  context.beginPath();
  context.moveTo(10,20);
  context.bezierCurveTo(x1, y, x2, y, 710, 20);
  context.stroke();

  if(y>id.height-200) {
    x1++;
    x2--;
    if(x1 == x2) {
      y = 150;
      x1 = 10;
      x2 = 710;
    }
  }
  else {
    y++;
  }
  window.requestAnimationFrame(courbebezieranimated);
}

window.requestAnimationFrame(courbebezieranimated);
