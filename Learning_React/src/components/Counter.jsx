import { useState } from "react"

function Counter() {
    const [number, setNumber] = useState(0);
    function increase() {
        setNumber(number+1);
    }

    function decrease() {
        setNumber(number-1);
    }
    return(
        <div style={{ backgroundColor: "lightgreen", padding: "50px" }}>
            <h1>I am counter</h1>
            <div style={{ backgroundColor: "white", padding: "10px" }}>
                <h3>Current count is: <strong>{number}</strong></h3>
                <div style={{display: "flex", gap: "10px"}}>
                    <button onClick={increase}>Increase Count</button>
                    <button onClick={decrease}>Decrease Count</button>
                </div>
            </div>
        </div>
    )
}

export default Counter;