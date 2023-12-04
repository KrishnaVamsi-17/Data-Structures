import React, { useEffect } from 'react'
import { Form, useActionData } from 'react-router-dom'

export default function Admin() {
  const data = useActionData()
  useEffect(()=>{
    fetch("http://localhost:8000/books",{
      method:'POST',
      headers: {"Content-Type":"application/json"},
          body: JSON.stringify(data)
    })

  },[])
  
  return (
    <div className="add-books">
       <h2>
        Enter the details of the book:
       </h2>
       <Form method="post" action="/admin">
        <label>
          <span>Book name:</span>
          <input type="text" name="bookname" required />
        </label>
        <label>
          <span>Book ISBN no.:</span>
          <input type="text" name="ISBN" required />
        </label>
        <label>
          <span>Book Category:</span>
          <input type="text" name="category"/>
        </label>
        <label>
          <span>Row no.:</span>
          <input type="text" name="row" />
        </label>
        <label>
          <span>Book count:</span>
          <input type="text" name="bookcount" />
        </label>
        <label>
          <span>Cost:</span>
          <input type="text" name="cost" />
        </label>
        <label>
          <span>Availability:</span>
           <select name="availability">
            <option name="availability" value="Yes">Yes</option>
            <option name="availability" value="No">No</option>
           </select>
        </label>
        <button>Submit</button>
        

       </Form>
       
    </div>
  )
}

export const detailsAction = async({request}) =>{

  const data = await request.formData()
  const submission = {
    bookname:data.get('bookname'),
    ISBN:data.get('ISBN'),
    category:data.get('category'),
    row:data.get('row'),
    bookcount:data.get('bookcount'),
    cost:data.get('cost'),
    availability:data.get('availability')
  }
  console.log(submission)

  return submission;


}
