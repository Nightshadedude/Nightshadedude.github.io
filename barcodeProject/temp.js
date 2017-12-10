var deviceJSON = [
  { Manufacturer: "ManufacturerA" , SKU: "Sku1" , Model: "Model A" , Capacity: "1GB" , Color: "Red" , trueColor: "red" , textColor: "black" , UPC: 890123456789 },
  { Manufacturer: "ManufacturerB" , SKU: "Sku2" , Model: "Model B" , Capacity: "2GB" , Color: "Cyan" , trueColor: "blue" , textColor: "black" , UPC: 890123456790 }
]

var page = {width: 8.5, widthUnit: "in", height: 11, heightUnit: "in", color: "grey"}; //change color back to white


/* Avery 5160 labels
    ***Dimensions in inches***
    3 wide by 10 high (30 total per sheet)
    8.5w by 11h - sheet
    2.625w by 1h - label
    .5 top border
    .5 bottom border
    .1875 right border
    .1875 left border
    .125 gutter between each column
  **********************************
  Avery 5167 labels
    ***Dimensions in inches***
    4 wide by 20 high (80 total per sheet)
    8.5w by 11h - sheet
    1.75 by .5 - label
    .5 top border
    .5 bottom border
    .33 right border
    .33 left border
    .28 gutter between each column
*/
var label = [
  {type: "5160", measurementUnit: "in", height: 1, width: 2.625, pageBorderTop: .5, pageBorderBottom: .5, 
  pageBorderRight: .1875, pageBorderLeft: .1875, gutter: .125, yNum: 10, xNum: 3},
  {type: "5167", measurementUnit: "in", height: .5, width: 1.75, pageBorderTop: .5, pageBorderBottom: .5, 
  pageBorderRight: .33, pageBorderLeft: .33, gutter: .28, yNum: 20, xNum: 4} 
]

var labelContents = [
  {label: "5160standard", measurementUnit: "in", 
    modelHeight: "0.3", modelWidth: "1.65", 
    colorHeight: "0.3", colorWidth: "0.975", 
    barcodeHeight: "0.4", barcodeWidth: "1.65", 
    capacityHeight: "0.4", capacityWidth: "0.975", 
    imeiHeight: "0.3", imeiWidth: "1.65", 
    skuHeight: "0.3", skuWidth: "0.975"},
  {label: "5167standard"}
]

function searchJSONArray(inputJSONArray, find, findKey, returnKey){
  for(var i = 0, L = inputJSONArray.length; i < L; i++){
    if(inputJSONArray[i][findKey] === find){
      return inputJSONArray[i][returnKey];
    } 
  }
  return '';
}

function svgDrawWH(parentID, svgName, svgWidth, svgHeight) {
  var $newSvg = $('<svg/>',{id: svgName}).attr({ width: svgWidth, height: svgHeight /*, style:'display: block;'*/});
  $('#' + parentID).append($newSvg);
  return svgName;
}

function getInput(){
  var inputPair = [];
  var ttlLabels = totalLabels("5160");

  for(var i = 1; i <= ttlLabels; i++){
    if($('#UPC' + i).val() && $('#IMEI' + i).val()){
      var upcVal = $('#UPC' + i).val();
      var imeiVal = $('#IMEI' + i).val();
      inputPair.push({
        "upc": upcVal,
        "imei": imeiVal
      });
    }
  }
  return inputPair;
}

function totalLabels(typeOfLabel){
  //grab the vertical and horizontal number of labels to get the total number of labels
  var yNum = searchJSONArray(label, typeOfLabel, "type", "yNum");
  var xNum = searchJSONArray(label, typeOfLabel, "type", "xNum");
  var totalLabels = yNum * xNum;

  return totalLabels;
}

function rectWithText(parentID, rectHeight, rectWidth, xStart, yStart, textColor, backgroundColor, inputText){

  var rectSvgName = 'rect';
  var txtSvgName = 'txt';

  var $newRect = $('<rect>', {id: rectSvgName}).attr({
    x: xStart,
    y: yStart,
    width: rectWidth,
    height: rectHeight,
    fill: backgroundColor
  });
  var $newText = $('<text/>', {id: txtSvgName}).attr({
    x: (xStart + rectWidth),
    y: (yStart + rectHeight),
    dx: '-50%',
    dy: '-50%',
    fill: textColor})
    .text(inputText);

  $('#' + parentID).append($newRect);
  $('#' + parentID).append($newText);
}

function inputBuilder(){
  var ttlLabels = totalLabels("5160");

  var elemID = 'input';
  var $inputAnchor = $("<span id =" + elemID + "></span>").css({
    "font-family": "\"Lucida Console\", Monaco, monospace",
    "vertical-align": "middle",
    "line-height": ".32in"
  });
  $('body').append($inputAnchor);
  var $newForm = $('<form/>');
  $('#' + elemID).append($newForm);
  var upc = "UPC";
  var imei = "IMEI";
  var spc = " ";
  var br = "<br>";
  for(i = 1; i <= ttlLabels; i ++){
    var upcDiv = $('<div/>').attr({id: 'upcDiv' + i}).css({
      "float": "left",
      "clear": "left",
      "width": ".9in",
      "height": ".3in",
      "margin-left": ".1in",
      "margin-top": ".1in"
    });
    var inUpcElem = $('<input/>',{
      type: 'text',
      id: upc + i
    })
    .css({
      "float": "left",
      "width": "2in",
      "height": ".3in",
      "border": "2px solid #123456",
      "border-radius": "8px",
      "margin-top": ".1in",
      "background-color": "#99ccff",
      "font-family": "\"Lucida Console\", Monaco, monospace"
    });;
    $('#' + elemID).append(upcDiv);
    $('#upcDiv' + i).append(upc + ' ' + i + ' ');
    $('#' + elemID).append(inUpcElem);

    var imeiDiv = $('<div/>').attr({id: 'imeiDiv' + i}).css({
      "float": "left",
      "width": ".9in",
      "height": ".3in",
      "margin-left": ".6in",
      "margin-top": ".1in"
    });
    var inImeiElem = $('<input/>',{
      type: 'text',
      id: imei + i
    })
    .css({
      "float": "left",
      "width": "2in",
      "height": ".3in",
      "border": "2px solid #123456",
      "border-radius": "8px",
      "margin-top": ".1in",
      "background-color": "#99ccff",
      "font-family": "\"Lucida Console\", Monaco, monospace"
    });
    $('#' + elemID).append(imeiDiv);
    $('#imeiDiv' + i).append(imei + ' ' + i + ' ');
    $('#' + elemID).append(inImeiElem);
  }
  var $submitButton = $('<button/>').attr({
    id: 'submitButton',
    onclick: 'outputBuilder();'
  })
  .css({
    "clear": "both",
    "float": "left",
    "width": "2in",
    "height": ".4in",
    "color": "white",
    "font-size" : ".25in",
    "background-color": "#001a33",
    "border": "2px solid #123456",
    "border-radius": "8px",
    "margin-top": ".1in",
    "margin-left": "2.5in",
    "text-decoration": "none"
  });
  $submitButton.append("Test");
  $('#' + elemID).append($submitButton);
}

function outputBuilder(){
  var typeOfLabel = "5160";
  var label = "label";
  var inputPair = getInput();
  $('#' + 'input').remove(); // input pulled so elements can be removed
  var elemID = 'output';
  var $outputAnchor = $("<span id =" + elemID + "></span>");
  $('body').append($outputAnchor);

  var svgName = 'sheetSVG';
  var pageWidth = page.width + page.widthUnit;
  var pageHeight = page.height + page.heightUnit;

  svgDrawWH(elemID, svgName, pageWidth, pageHeight);

  var yCount = 0;
  var xCount = 0;
  var xNum = searchJSONArray(label, typeOfLabel, "type", "xNum");
  var yNum = searchJSONArray(label, typeOfLabel, "type", "yNum");
  var measurementUnit = searchJSONArray(label, typeOfLabel, "type", "measurementUnit");
  var xWidth = searchJSONArray(label, typeOfLabel, "type", "width");
  var yHeight = searchJSONArray(label, typeOfLabel, "type", "height");
  var topBorder = searchJSONArray(label, typeOfLabel, "type", "pageBorderTop");
  var leftBorder = searchJSONArray(label, typeOfLabel, "type", "pageBorderLeft");
  var gutter = searchJSONArray(label, typeOfLabel, "type", "gutter");

  for(var i = 0; i < inputPair.length; i++){  
    var imei = inputPair[i].imei;
    var upc = parseInt(inputPair[i].upc);
    console.log(upc);
    var mfr = searchJSONArray(deviceJSON, upc, "UPC", "Manufacturer");
    var model = searchJSONArray(deviceJSON, upc, "UPC", "Model");
    var sku = searchJSONArray(deviceJSON, upc, "UPC", "SKU");
    var capacity = searchJSONArray(deviceJSON, upc, "UPC", "Capacity");
    var color = searchJSONArray(deviceJSON, upc, "UPC", "Color");
    var trueColor = searchJSONArray(deviceJSON, upc, "UPC", "trueColor");
    var textColor = searchJSONArray(deviceJSON, upc, "UPC", "textColor");

    var xStart = leftBorder + (xCount * gutter) + (xCount * xWidth) + measurementUnit;
    var yStart = topBorder + (yCount * yHeight) + measurementUnit;

    rectWithText(svgName, ".3in", ".3in", xStart, yStart, "black", "white", model);
    //draw name

    //draw color name (color rect)

    //draw barcode

    //draw capacity

    //draw imei
    
    //draw sku

    if(yCount > yNum){
      yCount -= yNum;
      xCount++;
    }
    yCount++;
  }
}
