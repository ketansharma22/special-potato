let n=5
// ~~~~ Write a Program to print the right triangle star pattern.
// for(let i=0;i<5;i++){
//     let star=""
//     for(let j=0;j<=i;j++)
//     {
//         star+="*"

//     }
//     console.log(star)
// }

//~~~~ Write a Program to print an inverted right triangle star pattern

// for(let i=0;i<5;i++){
//     let star=""
//     for(let j=5;j>i;j--){
//         star+="*"
//     }
//     console.log(star);
// }

//~~~~ Write a Program to print mirrored right triangle star pattern.


// for(let i=1;i<=n;i++){
//     let star=""
//     //n-i spaces in every row as i is ith row 
//     for( let j=1;j<=n;j++){
//         if(j<=(n-i)){
//             star+=" "
//             continue
//         }   
//         star+="*"
//     }
//     console.log(star);
// }


// ~~~~ Write a Program to print the Inverted Half Pyramid Star Pattern.

// for(let i=0;i<n;i++){
//     let star=""
//     for(let j=0;j<n;j++){
//         if(j<i){
//             star+=" "
//             continue
//         }

//         star+="*"
//     }
//     console.log(star);
// }


//~~~~ Write a Program to print the Full Pyramid Star pattern.

// ~~~ program to print hour clock pattern


// downside pyramid
// for (let i = 0; i < n ; i++) {
//   // printing spaces
//   for (let j = 0; j < i; j++) {
//      process.stdout.write(' ');
//   }
//   // printing star
//   for (let k = 0; k < (n - i) * 2 - 1; k++) {
//     process.stdout.write('*');
//   }
//   console.log();
// }

// // Upside pyramid
// for (let i = 2; i <= n; i++) {
//   // printing spaces
//   for (let j = 1; j <= n - i; j++) {
//     process.stdout.write(' ')
//   }
//   // printing star
//   for (let k = 0; k < 2 * i - 1; k++) {
//     process.stdout.write('*')
//   }
//   console.log();
// }