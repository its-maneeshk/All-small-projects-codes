import PassMultipleProps from "./subComponents/PassMultipleProps";

function ParentPassMultipleProps() {
    return(
        <div>
            <PassMultipleProps name = "Multiple Props" age = {52} address = "Silicon Valley, California, USA"/>
            <hr />
        </div>
    )
}

export default ParentPassMultipleProps;