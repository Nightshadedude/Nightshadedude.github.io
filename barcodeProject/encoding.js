//main "app" function
function barcodeMain(){
  
}

function buildInput(){
  
}

function buildOutput(){
  
}

//find and return values from JSON Array
function searchJSONArray(inputJSONArray, findValue, findKey, returnKey){
  let arrayLength = inputJSONArray.length;
  for(let i = 0; i < arrayLength; i++){
    if(inputJSONArray[i][findKey] === findValue){
      return inputJSONArray[i][returnKey];
    } 
  }
  return '';
}


//format of JSON: checksum value, char, bit encoding
let code39Encoding = [
  { Value:  0 , Char: "0" , Encoding: "101001101101" },
  { Value:  1 , Char: "1" , Encoding: "110100101011" },
  { Value:  2 , Char: "2" , Encoding: "101100101011" },
  { Value:  3 , Char: "3" , Encoding: "110110010101" },
  { Value:  4 , Char: "4" , Encoding: "101001101011" },
  { Value:  5 , Char: "5" , Encoding: "110100110101" },
  { Value:  6 , Char: "6" , Encoding: "101100110101" },
  { Value:  7 , Char: "7" , Encoding: "101001011011" },
  { Value:  8 , Char: "8" , Encoding: "110100101101" },
  { Value:  9 , Char: "9" , Encoding: "101100101101" },
  { Value:  10 , Char: "A" , Encoding: "110101001011" },
  { Value:  11 , Char: "B" , Encoding: "101101001011" },
  { Value:  12 , Char: "C" , Encoding: "110110100101" },
  { Value:  13 , Char: "D" , Encoding: "101011001011" },
  { Value:  14 , Char: "E" , Encoding: "110101100101" },
  { Value:  15 , Char: "F" , Encoding: "101101100101" },
  { Value:  16 , Char: "G" , Encoding: "101010011011" },
  { Value:  17 , Char: "H" , Encoding: "110101001101" },
  { Value:  18 , Char: "I" , Encoding: "101101001101" },
  { Value:  19 , Char: "J" , Encoding: "101011001101" },
  { Value:  20 , Char: "K" , Encoding: "110101010011" },
  { Value:  21 , Char: "L" , Encoding: "101101010011" },
  { Value:  22 , Char: "M" , Encoding: "110110101001" },
  { Value:  23 , Char: "N" , Encoding: "101011010011" },
  { Value:  24 , Char: "O" , Encoding: "110101101001" },
  { Value:  25 , Char: "P" , Encoding: "101101101001" },
  { Value:  26 , Char: "Q" , Encoding: "101010110011" },
  { Value:  27 , Char: "R" , Encoding: "110101011001" },
  { Value:  28 , Char: "S" , Encoding: "101101011001" },
  { Value:  29 , Char: "T" , Encoding: "101011011001" },
  { Value:  30 , Char: "U" , Encoding: "110010101011" },
  { Value:  31 , Char: "V" , Encoding: "100110101011" },
  { Value:  32 , Char: "W" , Encoding: "110011010101" },
  { Value:  33 , Char: "X" , Encoding: "100101101011" },
  { Value:  34 , Char: "Y" , Encoding: "110010110101" },
  { Value:  35 , Char: "Z" , Encoding: "100110110101" },
  { Value:  36 , Char: "-" , Encoding: "100101011011" },
  { Value:  37 , Char: "." , Encoding: "110010101101" },
  { Value:  38 , Char: " " , Encoding: "100110101101" }, // Orig Char: “SPACE’
  { Value:  39 , Char: "$" , Encoding: "100100100101" },
  { Value:  40 , Char: "/" , Encoding: "100100101001" },
  { Value:  41 , Char: "+" , Encoding: "100101001001" },
  { Value:  42 , Char: "%" , Encoding: "101001001001" },
  { Value:  n/a , Char: "*" , Encoding: "100101101101" }
]


//format of JSON: checksum value, code 128-A char, code 128-B char, code 128-C char, bit encoding
let code128Encoding = [
  { Value: 0 , A: "SP" , B: "SP" , C: "00" , Encoding: "11011001100"},
  { Value: 1 , A: "!" , B: "!" , C: "01" , Encoding: "11001101100"},
  { Value: 2 , A: "" , B: "" , C: "02" , Encoding: "11001100110"}, //empty due to error - original data { Value: 2 , A: """ , B: """ , C: "02" , Encoding: "11001100110"},
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