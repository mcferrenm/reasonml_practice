Js.log([|1, 2, 3|]); //  array

Js.log([1, 2, 3]); // immutable list

Js.log([1, 2, 3] === [1, 2, 3]); // reference equality (deep)

Js.log([1, 2, 3] == [1, 2, 3]); // shallow equality, values

/* Comment */

let greeting = "Hello";
let score = 10;
let newScore = score + 10;
let bool = true;

if (bool) {
    let message = "Enjoying the docs so far?";
    print_endline(message)
};

/*
 * bindings are immutable. bindings of the same name can shadow
 * previous bindings. like rust
 */


/*
 * bindings can be scoped with {}
 */
let message = { 
    let part1 = "hello";
    let part2 = "world";
    part1 ++ " " ++ part2
}

print_endline(message)

/*
 * Remember everything in functional programming is list-like
 * so even let is an expression similar to a function
 * (a) => 
 *   (b) =>
 *     a + b;
 */


