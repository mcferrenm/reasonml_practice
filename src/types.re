let score = 10; // contains no *written* type

let score: int = 10; // explicit typing

/*
 * annotation
 */

let myInt = 5;
let myInt: int = 5;
let myInt = (5: int) + (4: int);
let add = (x: int, y: int): int => x + y;
// let drawCircle = (~radius as r: int) : unit => ...; labeled argument

/*
 * Aliasing
 */

type scoreType = int; // aliasing a type by different name
let x: scoreType = 10;

/*
 * Design decisions. backed by ocaml. Types can be inferred.
 * coverage is always 100%. if it complies, you are good.
 * no null bugs.
 */