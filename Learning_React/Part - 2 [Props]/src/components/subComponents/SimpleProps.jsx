function SimpleProps({name}) {   //<- if you wanna use same variable as used in parent it should be in curley bracket and you can directly use that varibale in tags as below
    return(                      //for another way see another exxmaple as there is another props used so to get data we have to write props name as variable like abc.name, abc.age etc.
        <div>
            <h1>I'm Simple Props</h1>
            <p>{name}</p>
        </div>
    )
}

export default SimpleProps;