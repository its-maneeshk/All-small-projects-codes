function Child({user}) {
    return(
        <div>
            <ul>
                <li>Name: {user.name}, Age: {user.age}, Email: {user.email}</li>
                <hr />
            </ul>
        </div>
    )
}

export default Child;