function PassMultipleProps(abc) {
    return(
        <div>
            <h1>Passing Multiple Props</h1>
            <p>The data is</p>
                <ul>
                    <li>{abc.name}</li>
                    <li>{abc.age}</li>
                    <li>{abc.address}</li>
                </ul>
        </div>
    )
}

export default PassMultipleProps;