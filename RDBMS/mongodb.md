# Document

-   key/value pairs of data
-   represented in JSON format

```json
{
    "_id": 12323,
    "name": "Kishore Kumar",
    "salary": 72000,
    "address": {
        "city": "Bangalore",
        "state": "Karnataka"
    },
    "contact_details": {
        "phones": ["9731483934", "9844024784"],
        "emails": ["kishore.kumar@xmpl.com", "kishorekumar1238@gmail.com"]
    }
}
```

### Some useful mongodb commands:

-   `show dbs` - displays the list of all available databases
-   `db` - displays the current db (which is also indicated in the prompt)
-   `show collections` - displays the list of available colelctions (equivalent of tables in RDBMS)

```javascript
db.employees.insertOne({
    _id: 12323,
    name: 'Kishore Kumar',
    salary: 72000,
    address: {
        city: 'Bangalore',
        state: 'Karnataka',
    },
    contact_details: {
        phones: ['9731483934', '9844024784'],
        emails: ['kishore.kumar@xmpl.com', 'kishorekumar1238@gmail.com'],
    },
});
```

-   `db.employees.find()`
    -   equivalent of `select * from employees`
    -   gets all the documents from the collection `employees` in the current db

```javascript
db.books.insertMany([
    { title: 'Let us C', price: 299, pages: 145 },
    {
        title: 'Mongodb Made Easy',
        pages: 299,
        price: 495,
        author: 'Vinod Kumar K',
    },
]);
```

Update a field of a document:

```javascript
db.books.updateOne(
    { _id: ObjectId('62d8da05f1c4a3b05ec1f722') },
    {
        $set: {
            price: 175,
        },
    }
);
```

add a new field while updating:

```javascript
db.books.update(
    { _id: ObjectId('62d8da05f1c4a3b05ec1f722') },
    {
        $set: {
            pages: 119,
            author: 'Yeshwant Kanitkar',
        },
    }
);
```

update many documents:

```js
db.books.updateMany({}, { $set: { inStock: true } });
```

delete one document:

```js
db.books.deleteOne({ _id: ObjectId('62d8da05f1c4a3b05ec1f723') });
```

drop the collection:

```js
db.books.drop();
```

`db.customers.countDocuments()` gives the count of documents in the **customers** collection

