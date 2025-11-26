import Child from "./components/Child";

function Parent() {
    const name = "Manee";
    
    return(
        <div>
            <Child usersData = {name} />
            <Child />
            <Child />
            <Child />
            <Child usersData="coda"/>
        </div>
    )
}

export default Parent;