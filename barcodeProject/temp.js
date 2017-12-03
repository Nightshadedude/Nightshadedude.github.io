var deviceJSON = [
  { Manufacturer: "ManufacturerA" , SKU: "Sku1" , Model: "Model A" , Capacity: "1GB" , Color: "Red" , trueColor: "red" , textColor: "black" , UPC: 890123456789 },
  { Manufacturer: "ManufacturerB" , SKU: "Sku2" , Model: "Model B" , Capacity: "2GB" , Color: "Cyan" , trueColor: "blue" , textColor: "black" , UPC: 890123456790 }
]

var charEncodingJSON = [
  { Value: 0 , A: "SP" , B: "SP" , C: "00" , Encoding: "11011001100"},
  { Value: 1 , A: "!" , B: "!" , C: "01" , Encoding: "11001101100"},
  { Value: 2 , A: "" , B: "" , C: "02" , Encoding: "11001100110"}, //empty due to error{ Value: 2 , A: """ , B: """ , C: "02" , Encoding: "11001100110"},
  { Value: 3 , A: "#" , B: "#" , C: "03" , Encoding: "10010011000"},
  { Value: 4 , A: "$" , B: "$" , C: "04" , Encoding: "10010001100"},
  { Value: 5 , A: "%" , B: "%" , C: "05" , Encoding: "10001001100"},
  { Value: 6 , A: "&" , B: "&" , C: "06" , Encoding: "10011001000"},
  { Value: 7 , A: "'" , B: "'" , C: "07" , Encoding: "10011000100"},
  { Value: 8 , A: "(" , B: "(" , C: "08" , Encoding: "10001100100"},
  { Value: 9 , A: ")" , B: ")" , C: "09" , Encoding: "11001001000"},
  { Value: 10 , A: "*" , B: "*" , C: "10" , Encoding: "11001000100"},
  { Value: 11 , A: "+" , B: "+" , C: "11" , Encoding: "11000100100"},
  { Value: 12 , A: "," , B: "," , C: "12" , Encoding: "10110011100"},
  { Value: 13 , A: "-" , B: "-" , C: "13" , Encoding: "10011011100"},
  { Value: 14 , A: "." , B: "." , C: "14" , Encoding: "10011001110"},
  { Value: 15 , A: "/" , B: "/" , C: "15" , Encoding: "10111001100"},
  { Value: 16 , A: "0" , B: "0" , C: "16" , Encoding: "10011101100"},
  { Value: 17 , A: "1" , B: "1" , C: "17" , Encoding: "10011100110"},
  { Value: 18 , A: "2" , B: "2" , C: "18" , Encoding: "11001110010"},
  { Value: 19 , A: "3" , B: "3" , C: "19" , Encoding: "11001011100"},
  { Value: 20 , A: "4" , B: "4" , C: "20" , Encoding: "11001001110"},
  { Value: 21 , A: "5" , B: "5" , C: "21" , Encoding: "11011100100"},
  { Value: 22 , A: "6" , B: "6" , C: "22" , Encoding: "11001110100"},
  { Value: 23 , A: "7" , B: "7" , C: "23" , Encoding: "11101101110"},
  { Value: 24 , A: "8" , B: "8" , C: "24" , Encoding: "11101001100"},
  { Value: 25 , A: "9" , B: "9" , C: "25" , Encoding: "11100101100"},
  { Value: 26 , A: ":" , B: ":" , C: "26" , Encoding: "11100100110"},
  { Value: 27 , A: ";" , B: ";" , C: "27" , Encoding: "11101100100"},
  { Value: 28 , A: "<" , B: "<" , C: "28" , Encoding: "11100110100"},
  { Value: 29 , A: "=" , B: "=" , C: "29" , Encoding: "11100110010"},
  { Value: 30 , A: ">" , B: ">" , C: "30" , Encoding: "11011011000"},
  { Value: 31 , A: "?" , B: "?" , C: "31" , Encoding: "11011000110"},
  { Value: 32 , A: "@" , B: "@" , C: "32" , Encoding: "11000110110"},
  { Value: 33 , A: "A" , B: "A" , C: "33" , Encoding: "10100011000"},
  { Value: 34 , A: "B" , B: "B" , C: "34" , Encoding: "10001011000"},
  { Value: 35 , A: "C" , B: "C" , C: "35" , Encoding: "10001000110"},
  { Value: 36 , A: "D" , B: "D" , C: "36" , Encoding: "10110001000"},
  { Value: 37 , A: "E" , B: "E" , C: "37" , Encoding: "10001101000"},
  { Value: 38 , A: "F" , B: "F" , C: "38" , Encoding: "10001100010"},
  { Value: 39 , A: "G" , B: "G" , C: "39" , Encoding: "11010001000"},
  { Value: 40 , A: "H" , B: "H" , C: "40" , Encoding: "11000101000"},
  { Value: 41 , A: "I" , B: "I" , C: "41" , Encoding: "11000100010"},
  { Value: 42 , A: "J" , B: "J" , C: "42" , Encoding: "10110111000"},
  { Value: 43 , A: "K" , B: "K" , C: "43" , Encoding: "10110001110"},
  { Value: 44 , A: "L" , B: "L" , C: "44" , Encoding: "10001101110"},
  { Value: 45 , A: "M" , B: "M" , C: "45" , Encoding: "10111011000"},
  { Value: 46 , A: "N" , B: "N" , C: "46" , Encoding: "10111000110"},
  { Value: 47 , A: "O" , B: "O" , C: "47" , Encoding: "10001110110"},
  { Value: 48 , A: "P" , B: "P" , C: "48" , Encoding: "11101110110"},
  { Value: 49 , A: "Q" , B: "Q" , C: "49" , Encoding: "11010001110"},
  { Value: 50 , A: "R" , B: "R" , C: "50" , Encoding: "11000101110"},
  { Value: 51 , A: "S" , B: "S" , C: "51" , Encoding: "11011101000"},
  { Value: 52 , A: "T" , B: "T" , C: "52" , Encoding: "11011100010"},
  { Value: 53 , A: "U" , B: "U" , C: "53" , Encoding: "11011101110"},
  { Value: 54 , A: "V" , B: "V" , C: "54" , Encoding: "11101011000"},
  { Value: 55 , A: "W" , B: "W" , C: "55" , Encoding: "11101000110"},
  { Value: 56 , A: "X" , B: "X" , C: "56" , Encoding: "11100010110"},
  { Value: 57 , A: "Y" , B: "Y" , C: "57" , Encoding: "11101101000"},
  { Value: 58 , A: "Z" , B: "Z" , C: "58" , Encoding: "11101100010"},
  { Value: 59 , A: "[" , B: "[" , C: "59" , Encoding: "11100011010"},
  { Value: 60 , A: "" , B: "" , C: "60" , Encoding: "11101111010"}, //empty due to error { Value: 60 , A: "\" , B: "\" , C: "60" , Encoding: "11101111010"},
  { Value: 61 , A: "]" , B: "]" , C: "61" , Encoding: "11001000010"},
  { Value: 62 , A: "^" , B: "^" , C: "62" , Encoding: "11110001010"},
  { Value: 63 , A: "_" , B: "_" , C: "63" , Encoding: "10100110000"},
  { Value: 64 , A: "NUL" , B: "`" , C: "64" , Encoding: "10100001100"},
  { Value: 65 , A: "SOH" , B: "a" , C: "65" , Encoding: "10010110000"},
  { Value: 66 , A: "STX" , B: "b" , C: "66" , Encoding: "10010000110"},
  { Value: 67 , A: "ETX" , B: "c" , C: "67" , Encoding: "10000101100"},
  { Value: 68 , A: "EOT" , B: "d" , C: "68" , Encoding: "10000100110"},
  { Value: 69 , A: "ENQ" , B: "e" , C: "69" , Encoding: "10110010000"},
  { Value: 70 , A: "ACK" , B: "f" , C: "70" , Encoding: "10110000100"},
  { Value: 71 , A: "BEL" , B: "g" , C: "71" , Encoding: "10011010000"},
  { Value: 72 , A: "BS" , B: "h" , C: "72" , Encoding: "10011000010"},
  { Value: 73 , A: "HT" , B: "i" , C: "73" , Encoding: "10000110100"},
  { Value: 74 , A: "LF" , B: "j" , C: "74" , Encoding: "10000110010"},
  { Value: 75 , A: "VT" , B: "k" , C: "75" , Encoding: "11000010010"},
  { Value: 76 , A: "FF" , B: "l" , C: "76" , Encoding: "11001010000"},
  { Value: 77 , A: "CR" , B: "m" , C: "77" , Encoding: "11110111010"},
  { Value: 78 , A: "SO" , B: "n" , C: "78" , Encoding: "11000010100"},
  { Value: 79 , A: "SI" , B: "o" , C: "79" , Encoding: "10001111010"},
  { Value: 80 , A: "DLE" , B: "p" , C: "80" , Encoding: "10100111100"},
  { Value: 81 , A: "DC1" , B: "q" , C: "81" , Encoding: "10010111100"},
  { Value: 82 , A: "DC2" , B: "r" , C: "82" , Encoding: "10010011110"},
  { Value: 83 , A: "DC3" , B: "s" , C: "83" , Encoding: "10111100100"},
  { Value: 84 , A: "DC4" , B: "t" , C: "84" , Encoding: "10011110100"},
  { Value: 85 , A: "NAK" , B: "u" , C: "85" , Encoding: "10011110010"},
  { Value: 86 , A: "SYN" , B: "v" , C: "86" , Encoding: "11110100100"},
  { Value: 87 , A: "ETB" , B: "w" , C: "87" , Encoding: "11110010100"},
  { Value: 88 , A: "CAN" , B: "x" , C: "88" , Encoding: "11110010010"},
  { Value: 89 , A: "EM" , B: "y" , C: "89" , Encoding: "11011011110"},
  { Value: 90 , A: "SUB" , B: "z" , C: "90" , Encoding: "11011110110"},
  { Value: 91 , A: "ESC" , B: "{" , C: "91" , Encoding: "11110110110"},
  { Value: 92 , A: "FS" , B: "|" , C: "92" , Encoding: "10101111000"},
  { Value: 93 , A: "GS" , B: "}" , C: "93" , Encoding: "10100011110"},
  { Value: 94 , A: "RS" , B: "~" , C: "94" , Encoding: "10001011110"},
  { Value: 95 , A: "US" , B: "DEL" , C: "95" , Encoding: "10111101000"},
  { Value: 96 , A: "FNC3" , B: "FNC3" , C: "96" , Encoding: "10111100010"},
  { Value: 97 , A: "FNC2" , B: "FNC2" , C: "97" , Encoding: "11110101000"},
  { Value: 98 , A: "SHIFT" , B: "SHIFT" , C: "98" , Encoding: "11110100010"},
  { Value: 99 , A: "Code C" , B: "Code C" , C: "99" , Encoding: "10111011110"},
  { Value: 100 , A: "Code B" , B: "FNC4" , C: "Code B" , Encoding: "10111101110"},
  { Value: 101 , A: "FNC4" , B: "Code A" , C: "Code A" , Encoding: "11101011110"},
  { Value: 102 , A: "FNC1" , B: "FNC1" , C: "FNC1" , Encoding: "11110101110"},
  { Value: 103 , A: "START A" , B: "START A" , C: "START A" , Encoding: "11010000100"},
  { Value: 104 , A: "START B" , B: "START B" , C: "START B" , Encoding: "11010010000"},
  { Value: 105 , A: "START C" , B: "START C" , C: "START C" , Encoding: "11010011100"},
  { Value: 106 , A: "STOP" , B: "STOP" , C: "STOP" , Encoding: "1100011101011"} // '11' term code appended so logic does not have to handle
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
