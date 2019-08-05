/*
 * String & Char
 */

let greeting = "Hello world!";
let multilineGreeting = "Hello
  world!";

let c = 'c';

let oneSlash = "\\";

print_endline(oneSlash);

let greetings = "Hello " ++ "world!"; // ++ concat

/*
 * special syntax, multiline, no spec char escaping, hooks for
 * preprocessors
 */

let greetingAndOneSlash = {|Hello
World
\
Hehe...
|};

print_endline(greetingAndOneSlash);

let world = {js|世界|js}; // unicode
let helloWorld = {j|你好, $world|j}; // interpolation using j marker for preprocessor

print_endline(helloWorld);

/*
 * Js.String API in bucklescript API docs
 * reason string maps to a js string, mix & match operators in both STD libs
 */

/* more overloading of types in js === less help a type system or 
 * teammate can give. Re gives fast and maintanble types & DS
 */

// let r = Str.regexp({|hello \([A-Za-z]+\)|}); // no escaping necessary

let firstLetterOfAlphabet = 'a'; // compiles to int 0-255



let isVowel = (theChart) => // speeds up pattern matching, more to come...
  switch (theChart) {
    | 'a' | 'e' => true
    | _ => false
  };

"a".[0] // str to char
String.make(1, 'a'); // char to string







