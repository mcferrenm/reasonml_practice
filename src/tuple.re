/*

Tuples are immutable, ordered, fix-sized at creation, heterogenous
types.

*/

let ageAndName = (24, "Lil' Reason");
let my3dCoordinates = (20.0, 30.5, 100.0);

let ageAndName: (int, string) = (24, "Lil' Reason"); // type annotation

type coor3d = (float, float, float);
let my3dCoordinates: coor3d = (20.0, 30.5, 100.0); // with tuple type alias



let (_, y, _) = my3dCoordinates; // retrieval convenience, _ ignores

print_float(y);

let doSomeOperationsHere = () => {};
let doSomeMoreOperationsHere = () => {};

let getCenterCoordinates = () => {
    let x = doSomeOperationsHere();
    let y = doSomeMoreOperationsHere();
    (x, y) // useful to pass around some values, without too much typing
};

/* 
 * keep usage of tuple local, for long living data use record, named field
 * 
 * Combination with switch is very powerful. Wipes out an entire category 
 * of bugs. cleanly lists out all possible combination
 */

// switch (isWindowOpen, isDoorOpen) {
//     | (true, true) => ...
//     | (true, false) => ...
//     | (false, true) => ...
//     | (false, false) => ...
// };

