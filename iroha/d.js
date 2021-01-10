//app.js

const readlineSync = require('readline-sync');

const MAX = 60, MIN = 0;
let value = 30, key;
console.log(`\n\n${(new Array(20)).join(' ')}[Z] <- -> [X]  決定: [SPACE]\n`);
while (true) {
    console.log('\x1B[1A\x1B[K|' +
        (new Array(value + 1)).join('-') + 'O' +
        (new Array(MAX - value + 1)).join('-') + '| ' + value);
    key = readlineSync.keyIn('',
        { hideEchoBack: true, mask: '', limit: 'zx ' });
    if (key === 'z') { if (value > MIN) { value--; } }
    else if (key === 'x') { if (value < MAX) { value++; } }
    else { break; }
}
console.log(`\nあなたが決めた値: ${value}`);