console.log("test");

const endpoint = "https://reqres.in/api/users/4"

fetch(endpoint)
.then((result) => result.json())
.then(({data}) => console.log(data));

