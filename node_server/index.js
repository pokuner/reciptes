var jsonfile = require('jsonfile')
var express = require('express')
var app = express()

app.get('/', function (req, res) {
  res.send('Hello World!')
})

app.listen(3000, function () {
  console.log('Example app listening on port 3000!')
})

app.get('/package', function (req, res) {
  
  jsonfile.readFile('./package.json', function(err, obj) {
    res.send(obj)
    console.log(obj.name)
  })
})
