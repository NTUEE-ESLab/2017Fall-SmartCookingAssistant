import React, { Component } from 'react';
import 'isomorphic-fetch';


class SignupPage extends Component {
  state = {
    email: '',
    name: '',
    password: '',
  }

  render() {
    return (
      <div className="signupBlock">
        <h2>註冊 Blog</h2>
        <hr />
        <form action="#" onSubmit={ () => this.props.submit( this.state.email, this.state.name, this.state.password ) } >
          <div className="form-group">
            <label htmlFor="email" />
            <input
              type="email"
              className="form-control"
              id="email"
              placeholder="Email"
              value={ this.state.email }
              onChange={ e => { this.setState( { email: e.target.value } ); } }
            />
          </div>
          <div className="form-group">
            <label htmlFor="name" />
            <input
              type="text"
              className="form-control"
              id="name"
              placeholder="Username"
              value={ this.state.name }
              onChange={ e => { this.setState( { name: e.target.value } ); } }
            />
          </div>
          <div className="form-group">
            <label htmlFor="password" />
            <input
              type="password"
              className="form-control"
              id="password"
              placeholder="Password"
              value={ this.state.password }
              onChange={ e => { this.setState( { password: e.target.value } ); } }
            />
          </div>
          <button type="submit" className="btn btn-default submit">Sign Up</button>
        </form>
      </div>
    );
  }
}

export default SignupPage;
