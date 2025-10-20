const input = require('fs').readFileSync(0, 'utf8').trim().split(/\s+/).map(Number);
const mods = new Set(input.map(x => x % 42));
console.log(mods.size);
