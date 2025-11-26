import { useState } from "react";

function Condition() {
    const [count, setCount] = useState(0);

    function setCountController() {
        setCount(count + 1);
    }

    return (
        <div style={{ backgroundColor: "red", padding: "50px", align: "center" }}>
            <h1>We're conditional Statements</h1>
            <div style={{ backgroundColor: "white", padding: "40px" }}>
                <input type="number" value={count} readOnly style={{ display: "flex", textAlign: "right", fontSize: "29px"}}/>
                {
                    count <= 0 ? (
                        <h1>Condition below 0 applied</h1>
                    ) : count >= 1 && count <= 10 ? (
                        <h1>Condition between 1 to 10 applied</h1>
                    ) : count >= 11 && count <= 20 ? (
                        <h1>Condition between 11 to 20 applied</h1>
                    ) : count > 20 ? (
                        <h1>Condition above 20 applied</h1>
                    ) : null
                }
            </div>
            <button
                style={{
                    margin: "3px",
                    height: "40px",
                    width: "200px",
                    backgroundColor: "greenyellow",
                    border: "none",
                    cursor: "pointer"
                }}
                onClick={setCountController}
            >
                Click me harder
            </button>
        </div>
    )
}

export default Condition;