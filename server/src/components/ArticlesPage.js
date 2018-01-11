import 'isomorphic-fetch';
import React, { Component } from 'react';


class ArticlesPage extends Component {
  state = {
      articles: [],
      tags: [],
      authors: [],
    };

  componentDidMount() {
    if ( this.props.tag !== undefined ) {
      if ( this.props.tag !== '' ) {
        fetch( `/api/articles/tag/${this.props.tag}` )
          .then( res => res.json() )
          .then( articles => {
            this.setState( {
              articles,
            } );
          } );
      }

      else {
        fetch( '/api/articles/tag' )
          .then( res => res.json() )
          .then( json => {
            this.setState( {
              tags,
            } );
          } );
      }
    }

    else if ( this.props.author !== undefined ) {
      if ( this.props.author !== '' ) {
        fetch( `/api/articles/author/${this.props.author}` )
          .then( res => res.json() )
          .then( json => {
            this.setState( {
              articles,
            } );
          } );
      }

      else {
        fetch( '/api/articles/author' )
          .then( res => res.json() )
          .then( json => {
            this.setState( {
              authors,
            } );
          } );
      }
    }

    else {
      fetch( '/api/articles' )
        .then( res => res.json() )
        .then( json => {
          console.log( json );
          this.setState( {
            articles: json,
          } );
        } );
    }
  }

  renderHeader() {
    if ( this.props.tag === '' ) {
      return (
        <table className="table table-hover">
          <thead>
            <tr>
              <th>Tag</th>
              <th>Number of Articles</th>
              <th>Updated_at</th>
            </tr>
          </thead>
          <tbody>
            { this.renderArticles() }
          </tbody>
        </table>
      );
    }

    if ( this.props.author === '' ) {
      return (
        <table className="table table-hover">
          <thead>
            <tr>
              <th>Author</th>
              <th>Number of Articles</th>
              <th>Updated_at</th>
            </tr>
          </thead>
          <tbody>
            { this.renderArticles() }
          </tbody>
        </table>
      );
    }

    return (
      <table className="table table-hover">
        <thead>
          <tr>
            <th>Title</th>
            <th>Tags</th>
            <th>Author</th>
            <th>Created_at</th>
          </tr>
        </thead>
        <tbody>
          { this.renderArticles() }
        </tbody>
      </table>
    );
  }

  renderArticles() {
    const { articles, tags, authors } = this.state;

    if ( this.props.tag === '' ) {
      return tags.map( tag => (
        <tr key={ tag.id } >
          <td><a href={ `#/articles/${tag.name}` } >{ tag.name }</a></td>
          <td><a href={ `#/articles/${tag.name}` } >{ tag.articleNum }</a></td>
          <td><a href={ `#/articles/${tag.name}` } >{ tag.updatedAt }</a></td>
        </tr>
      ) );
    }

    if ( this.props.author === '' ) {
      return authors.map( author => (
        <tr key={ author.id } >
          <td><a href={ `#/articles/${author.name}` } >{ author.name }</a></td>
          <td><a href={ `#/articles/${author.name}` } >{ author.articleNum }</a></td>
          <td><a href={ `#/articles/${author.name}` } >{ author.updatedAt }</a></td>
        </tr>
      ) );
    }

    return articles.map( article => (
      <tr key={ article.id } >
        <td><a href={ `#/articles/${article.id}` } >{article.title}</a></td>
        <td><a href={ `#/articles/${article.id}` } >{( article.tags || [] ).join( ', ' )}</a></td>
        <td><a href={ `#/articles/${article.id}` } >{article.author}</a></td>
        <td><a href={ `#/articles/${article.id}` } >{article.createdAt}</a></td>
      </tr>
    ) );
  }

  render() {
    return (
      <div className="container">
        <div className="row">
          <div className="col-md-9">
            { this.renderHeader() }
          </div>
        </div>
        <div className="row">
          <div className="col-md-12">
            <a href="#/" className="btn btn-default">
              <span className="glyphicon glyphicon-arrow-left" aria-hidden="true" /> Back
            </a>
          </div>
        </div>
      </div>
    );
  }
}

export default ArticlesPage;
