import { useState } from "react";

function Calculator() {
    const [number, setNumber] = useState(0);
    function handleClick() {
        setNumber(value);
    }

    function clearInput() {
        setNumber("");
    }
    return (
        <section style={{ backgroundColor: "lightblue", padding: "20px", height: "80vh" }}>
            <h1>Calaulator Corp. NC Nepal</h1>
            <div style={{ display: "flex", alignItems: "center" }}>
                <div>
                    <input type="number" value={number} readOnly />
                    <div>
                        <button onClick={{}}>7</button>
                        <button>4</button>
                        <button>1</button>
                        <button>+</button>
                    </div>
                    <div>
                        <button>8</button>
                        <button>5</button>
                        <button>1</button>
                        <button>-</button>
                    </div>
                    <div>
                        <button>9</button>
                        <button>6</button>
                        <button>3</button>
                        <button>/</button>
                    </div>
                    <div>
                        <button>0</button>
                        <button>.</button>
                        <button onClick={clearInput} style={{width: "48%"}}>C</button>
                    </div>
                </div>
            </div>
        </section>
    )
}

export default Calculator;