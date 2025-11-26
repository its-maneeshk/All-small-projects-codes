function Child({usersData = "admin"}) {
    return(
        <div>
            <p>I'm Child Component</p>
            <div>
                <p>
                    name : {usersData}
                </p>
            </div>
        </div>
    )
}

export default Child;