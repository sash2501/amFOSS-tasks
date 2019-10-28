var express = require('express');
var 
graphqlHTTP = require('express-graphql');
var { buildSchema } = require('graphql');

// Construct a schema, using GraphQL schema language
var schema = buildSchema(`
  {
  search(query: "userid", type: USER, first: 10) {
    edges {
      node {
        ... on User {
          name
          email
          login
          bio
          id
          avatarUrl
        }
      }
    }
  }
}

`);


// The root provides a resolver function for each API endpoint
//var root = {
 // hello: () => {
  //  return 'Hello world!';
  //},
//};
var app = express();
app.use('https://api.github.com/graphql',bodyParser.json(), graphqlExpress(buildOptions));

app.use('/graphiql', graphiqlExpress({
    endpointURL: 'https://api.github.com/graphql',
    passHeader: `'Authorization': '44eeaeb27eb72f21ab6303b3e58a49b22ab2f395-foo@bar.com'`,
}));
app.use('https://api.github.com/graphql', graphqlHTTP({
  schema: schema,
  rootValue: root,
  graphiql: true,
}));
app.listen(8080);
console.log('Running a GraphQL API server at localhost:8080/graphql');