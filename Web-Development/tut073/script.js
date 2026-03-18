console.log('intializing')

function view(num){
    if(num<1000){
        return num;
    }
    else if(num>=1000 && num<1000000){
        num = num/1000;
        return `${num}K`;
    }
    else if(num>=1000000 && num<1000000000){
        num = num/1000000;
        return `${num}M`;
    }
    else{
        num = num/1000000000;
        return `${num}B`;
    }
}
function getcard(title,ch_name,views,month_ago,duration,thumbnail){
    let cont = document.querySelector(".container")
    let box = document.createElement("div");
    let v = view(views);
    box.setAttribute("class","box");
    let img = document.createElement('img');
    img.setAttribute("src",thumbnail)

    let div1 = document.createElement("div");
    div1.setAttribute("class","inner");

    let div1_1 = document.createElement("div")
    div1_1.innerHTML = title;
    
    let div1_2 = document.createElement("div")
    let span1 = document.createElement("span")
    span1.innerHTML = ch_name;

    let ul1 = document.createElement("ul")
    let l1 = document.createElement("li")
    l1.innerHTML = `${v} views`;
    let l2 = document.createElement("li")
    l2.innerHTML = `${month_ago} month ago`;


    cont.append(box);
    box.append(img);
    box.append(div1);
    div1.append(div1_1);
    div1.append(div1_2)
    div1_2.append(span1)
    div1_2.append(ul1)
    ul1.append(l1)
    ul1.append(l2)
}
// let v = views(100000000000000);
// console.log(v);



getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");
getcard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22","https://i.ytimg.com/vi/CO_DAXswOrc/hqdefault.jpg?sqp=-oaymwEnCPYBEIoBSFryq4qpAxkIARUAAIhCGAHYAQHiAQoIGBACGAY4AUAB&rs=AOn4CLDAdGU108xxIEVtrdwSjKU0lCY0VA");