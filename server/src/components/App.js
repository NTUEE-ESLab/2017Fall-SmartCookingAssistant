import React, { Component } from 'react';
import 'isomorphic-fetch';
import bcrypt from 'bcryptjs';

import HomePage from './HomePage';
import ArticlesPage from './ArticlesPage';
import LoginPage from './LoginPage';
import SignupPage from './SignupPage';
import SingleArticlePage from './SingleArticlePage';
import CreateArticlePage from './CreateArticlePage';

class App extends Component {
  state = {
    route: window.location.hash.substr( 1 ),
    user: undefined,
  };

  componentWillMount() {
    this.checkUser();
  }

  componentDidMount() {
    window.addEventListener( 'hashchange', () => {
      this.setState( {
        route: window.location.hash.substr( 1 ),
      } );
    } );
  }

  checkUser = () => {
    fetch( '/api/auth/check', {
      method: 'post',
      headers: {
        'content-type': 'application/json'
      },
      credentials: 'include',
    } )
      .then( res => res.json() )
      .then( res => {
        if ( res.status === true ) {
          this.setState( {
            user: res.user,
          } );
        }
      } )
      .catch( err => {
        console.error( err );
      } );
    if ( this.state.user )
      console.log( this.state.user );
  }

  loginSubmit = ( email, password ) => {
    fetch( '/api/auth/login', {
      method: 'post',
      headers: {
        'content-type': 'application/json'
      },
      body: JSON.stringify( {
        email,
        password,
      } ),
      credentials: 'include',
    } )
      .then( res => {
        if ( res.ok )
          return res;
        throw new Error( res );
      } )
      .then( res => {
        if ( res.status === false ) {
          window.alert( res.message );
          throw new Error( res );
        }
        this.checkUser();
        location.hash = '';
      } )
      .catch( err => {
        console.error( err );
      } );
  }

  signupSubmit = ( email, name, password ) => {
    const hash = bcrypt.hashSync( password, 8 );
    fetch( '/api/auth/signup', {
      method: 'post',
      headers: { 'content-type': 'application/json' },
      body: JSON.stringify( {
        email,
        name,
        password: hash,
      } ),
    } )
      .then( res => res.json() )
      .then( res => {
        if ( res.status === false )
          throw new Error( res );


        location.hash = '#/login';
      } )
      .catch( err => {
        console.error( err );
      } );
  }

  logout = () => {
    fetch( '/api/auth/logout', {
      method: 'post',
      headers: {
        'content-type': 'application/json'
      },
      credentials: 'include',
    } )
      .then( res => res.json() )
      .then( res => {
        this.setState( {
          user: undefined,
        } );
        location.reload();
      } )
      .catch( err => {
        console.error( err );
      } );
  }

  renderRoute() {
    if ( this.state.route === '/login' )
      return <LoginPage submit={ this.loginSubmit } />;


    if ( this.state.route === '/signup' )
      return <SignupPage submit={ this.signupSubmit } />;


    if ( this.state.route === '/articles' )
      return <ArticlesPage />;


    if ( this.state.route === '/articles/tag' )
      return <ArticlesPage tag={ '' } />;


    if ( this.state.route === '/articles/author' )
      return <ArticlesPage author={ '' } />;


    if ( this.state.route.startsWith( '/articles/tag/' ) ) {
      const tag = this.state.route.split( '/articles/tag/' )[ 1 ];
      return <ArticlesPage tag={ tag } />;
    }

    if ( this.state.route.startsWith( '/articles/author/' ) ) {
      const author = this.state.route.split( '/articles/author/' )[ 1 ];
      return <ArticlesPage author={ author } />;
    }

    if ( this.state.route === '/articles/new' ) {
      if ( !this.state.user ) {
        window.alert( '請先登入。' );
        location.hash = '#/login';
        return;
      }
      return <CreateArticlePage user={ this.state.user } />;
    }

    if ( this.state.route.startsWith( '/articles/' ) ) {
      const id = this.state.route.split( '/articles/' )[ 1 ];
      return <SingleArticlePage id={ id } user={ this.state.user } />;
    }

    return <HomePage loggedIn={ this.state.user !== undefined } />;
  }

  renderBreadcrumb() {
    if ( this.state.route === '/articles' ) {
      return (
        <ol className="breadcrumb">
          <li><a href="#/">Home</a></li>
          <li><a href="#/articles">Articles</a></li>
        </ol>
      );
    }

    if ( this.state.route === '/articles/tag' ) {
      return (
        <ol className="breadcrumb">
          <li><a href="#/">Home</a></li>
          <li><a href="#/articles">Articles</a></li>
          <li><a href="#/articles/tag">Tag</a></li>
        </ol>
      );
    }

    if ( this.state.route === '/articles/author' ) {
      return (
        <ol className="breadcrumb">
          <li><a href="#/">Home</a></li>
          <li><a href="#/articles">Articles</a></li>
          <li><a href="#/articles/author">Author</a></li>
        </ol>
      );
    }

    if ( this.state.route.startsWith( '/articles/tag/' ) ) {
      const tag = this.state.route.split( '/articles/tag/' )[ 1 ];
      return (
        <ol className="breadcrumb">
          <li><a href="#/">Home</a></li>
          <li><a href="#/articles">Articles</a></li>
          <li><a href="#/articles/tag">Tag</a></li>
          <li><a href={ `#/articles/tag/${tag}` }>{tag}</a></li>
        </ol>
      );
    }

    if ( this.state.route.startsWith( '/articles/author/' ) ) {
      const author = this.state.route.split( '/articles/author/' )[ 1 ];
      return (
        <ol className="breadcrumb">
          <li><a href="#/">Home</a></li>
          <li><a href="#/articles">Articles</a></li>
          <li><a href="#/articles/author">Author</a></li>
          <li><a href={ `#/articles/author/${author}` }>{author}</a></li>
        </ol>
      );
    }

    if ( this.state.route.startsWith( '/articles/' ) ) {
      const id = this.state.route.split( '/articles/' )[ 1 ];
      return (
        <ol className="breadcrumb">
          <li><a href="#/">Home</a></li>
          <li><a href="#/articles">Articles</a></li>
          <li><a href={ `#/articles/${id}` }>{id}</a></li>
        </ol>
      );
    }

    return (
      <ol className="breadcrumb">
        <li><a href="#/">Home</a></li>
      </ol>
    );
  }

  render() {
    return (
      <div>
        <nav className="navbar navbar-default navbar-static-top">
          <div className="container">
            <div className="navbar-header">
              <a className="navbar-brand" href="#/">Web Seminar - Blog</a>
            </div>
            <ul className="nav navbar-nav">
              <li>
                <a href="#/">Home</a>
              </li>
              <li>
                <a href="#/articles">Articles</a>
              </li>
            </ul>
            { this.state.user ? (
              <ul className="nav navbar-nav navbar-right">
                <li>
                  <a href={ `#/articles/author/${this.state.user.name}` } >我的文章</a>
                </li>
                <li>
                  <a href="#" onClick={ this.logout }>登出</a>
                </li>
              </ul> ) : (
                <ul className="nav navbar-nav navbar-right">
                  <li>
                    <a href="#/login">登入</a>
                  </li>
                  <li>
                    <a href="#/signup">註冊</a>
                  </li>
                </ul> )
            }
          </div>
        </nav>
        <div className="container">
          <div className="row">
            <div className="col-md-12">
              {this.renderBreadcrumb()}
            </div>
          </div>
        </div>
        {this.renderRoute()}
      </div>
    );
  }
}


export default App;
