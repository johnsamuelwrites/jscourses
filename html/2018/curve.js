var y = 0;
function courbequadratique() {
  var id = document.getElementById("courbequadratiqueanimated");
  var context = id.getContext("2d");

  context.clearRect(0, 0, id.width, id.height);

  context.fillStyle =  "black";
  context.lineWidth = 1;
  context.beginPath();
  context.arc(350, y, 7, 0, 2 * Math.PI);
  context.fill();

  context.beginPath();
  context.strokeStyle =  "red";
  context.lineWidth = 2;
  context.moveTo(10,20);
  context.lineTo(350, y, 710, 20);

  context.moveTo(710,20);
  context.lineTo(350, y, 710, 20);
  context.stroke();
  context.strokeStyle =  "#00b33c";
  context.lineWidth = 10;
  context.beginPath();
  context.moveTo(10,20);
  context.quadraticCurveTo(350, y, 710, 20);
  context.stroke();

  y++;
  if(y>id.height) {
    y = 150;
  }
  window.requestAnimationFrame(courbequadratique);
}

window.requestAnimationFrame(courbequadratique);
