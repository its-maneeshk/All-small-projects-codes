import Child from "./child/Child";
function Parent() {
    const user1 = {
        name: "Alice",
        age: 28,
        email: "alice@example.com"
    }
    const user2 = {
        name: "Bob",
        age: 35,
        email: "bob@example.com"
    }
    const user3 = {
        name: "Charlie",
        age: 40,
        email: "charlie@example.com"
    }
    const user4 = {
        name: "David",
        age: 40,
        email: "david@example.com"
    }

    return (
        <div>
            <h1>Welcome to the Parent Component!</h1>
            <h3>These are the user data</h3>
            <Child user={user1} />
            <Child user={user2} />
            <Child user={user3} />
            <Child user={user4} />
        </div>
    )
}

export default Parent;