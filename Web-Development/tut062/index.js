// Exercise : 10


function random_no() {
    let r = Math.random() * 100
    let count = 0;
    if (r < 33) {
        count = 1;
    }
    else if (r >= 33 && r < 66) {
        count = 2;
    }
    else {
        count = 3;
    }
    return count;
}
function random_word(str) {
    let count = random_no()
    let i = 0, e = 0, s = 0;
    if (count == 1) {
        while (str[i] != ",") {
            i++;
        }
        e = i;
        let ans = str.slice(s,e);
        return ans;
    }
    else if (count == 2) {
        let k = 0;
        while (k != 2) {
            if (str[i] == ",") {
                k++;
            }
            if (k < 1) {
                s = i + 2;
            }
            i++;
        }
        e = i - 1;
        let ans = str.slice(s, e);
        return ans;
    }
    else {
        let k = 0;
        while (k != 2) {
            if (str[i] == ',') {
                k++;
            }
            i++;
        }
        s = i;
        let ans = str.slice(s);
        return ans;
    }
}
Adjective = "Crazy,Amazing,Fire"
Shop_name = "Engine,Foods,Garments"
Another_word = "Bros,limited,Hub"

let A = random_word(Adjective)
let S = random_word(Shop_name)
let An = random_word(Another_word)
console.log(`Name       ::   ${A} ${S} ${An}`);
