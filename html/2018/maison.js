function maison() {
  var id = document.getElementById("maison");
  var context = id.getContext("2d");
  context.strokeStyle =  "#ffb33c";
  context.lineWidth = 10;
  context.beginPath();
  context.rect(400, 200, 250, 200);
  context.lineTo(300,100);
  context.lineTo(550,100);
  context.lineTo(650,200);
  context.moveTo(300,100);
  context.lineTo(200,200);
  context.lineTo(200,400);
  context.lineTo(400,400);
  context.stroke();
}

maison();
