import { useState } from "react";


function HideUnhideComponents() {
    const userName = "its_maneeshk_";

    const [display, setDisplay] = useState(true);
    function visiblity() {
        setDisplay(!display);
    }

    return (
        <div style={{ backgroundColor: "lightblue", padding: "50px" }}>
            <h1><strong>Welcome Manish Patel</strong></h1>
            <h2>Your's Information are:</h2>
            <div style={{backgroundColor: "white", margin: "5px", padding: "30px"}}>
                <p>User ID: {userName}</p>
                <p>Mail: maneeshkurmii@gmail.com</p>
                <p>
                    Password: {display ? (
                        <span>sdf42x1@4xcvx</span>) : (
                        <span>*************</span>
                        )}

                </p>
                <button onClick={visiblity}>
                    {display ? "hide" : "show"}
                </button>
            </div>
        </div>
    )
}

export default HideUnhideComponents;