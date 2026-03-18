console.log("Initializing.......")
async function get_data1(data1) {
    return new Promise((resolve) => {
        setTimeout(() => {
            resolve(data1);
        }, 1500);
    })
}

async function main(prom1) {


    // let prom1 = "Itializing Hacking"
    let data1 = await get_data1(prom1);
    let div1 = document.createElement("div")
    div1.innerHTML = data1;
    document.querySelector('.content').append(div1)

    let promi1 = "..."
    let span1 = document.createElement("span")
    span1.innerHTML = promi1;
    document.querySelector('.content').append(span1)

    let visible = true;
    let x = setInterval(() => {
        span1.style.color = visible ? "rgb(4, 170, 4)" : "transparent";
        visible = !visible;
    }, 20)

    console.log(x)
    setTimeout(() => {
        clearInterval(x);
        // span1.style.color = "black";
    }, 1000)






    // let data1 = await get_data1("Iitializing Hacking...");
    // console.log(data1);


    // let data2 = await get_data1("Reading your Files...");
    // console.log(data2);
    // let data3 = await get_data1("Password files Detected...");
    // console.log(data3);
    // let data4 = await get_data1("Sending all passwords and personal file to server to server...");
    // console.log(data4);
    // let data5 = await get_data1("Cleanin up...");
    // console.log(data5);
}

(async () => {
    console.log("My code is running");
    await main("Itializing Hacking");
    await main("Reading your Files");
    await main("Password files Detected");
    await main("Sending all passwords and personal file to server to server");
    await main("Cleanin up...");
})()