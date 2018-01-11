import { Router } from 'express';

import models from '../models';

const { recipe } = models;

const recipeRouter = new Router();

recipeRouter.get( '/:num', async ( req, res ) => {
  try {
    const recipes = await recipe.findAndCountAll( {
      limit: 10,
      offset: req.params.num * 10,
      order: [
        [ 'updatedAt', 'DESC' ]
      ]
    } );

    res.json( { recipes: recipes.rows } );
  }
  catch ( err ) {
    console.error( err );
  }
} );

// recipeRouter.get( '/:id', async ( req, res ) => {
//   const id = req.params.id;
//   const Recipe = await recipe.findById( id );
//   Recipe.dataValues.author = await user.findById( Recipe.userId ).dataValues.name;
//   Recipe.dataValues.tags = await Recipe.getTags().map( Tag => Tag.dataValues.name );

//   res.json( {
//     recipe: Recipe,
//   } );
// } );

// recipeRouter.post( '/', async ( req, res ) => {
//   const { title, content, tags, userId } = req.body;
//   try {
//     const User = await user.findById( userId );

//     const Recipe = await User.createRecipe( {
//       title,
//       content,
//       userId
//     } );

//     for ( let i = 0; i < tags.length; i += 1 ) {
//       const [ Tag ] = await tag.findOrCreate( {
//         where: {
//           name: tags[ i ],
//         },
//       } );

//       await Recipe.addTag( Tag );
//       await Tag.addRecipe( Recipe );
//     }

//     res.json( Recipe );
//   }
//   catch ( err ) {
//     console.error( err );
//   }
// } );

// recipeRouter.put( '/:id', async ( req, res ) => {
//   try {
//     const { title, content, tags } = req.body;
//     const id = req.params.id;

//     const Recipe = await recipe.findById( id );
//     const Tags = await Recipe.getTags();

//     const originalTagNames = Object.values( Tags ).map( Tag => Tag.name );

//     Object.values( Tags ).forEach( async Tag => {
//       if ( tags.indexOf( Tag.name ) === -1 ) {
//         await Recipe.removeTag( Tag );
//         await Tag.removeRecipe( Recipe );
//       }

//       if ( await Tag.countRecipes() === 0 ) {
//         await tag.destroy( {
//           where: {
//             id: Tag.id,
//           }
//         } );
//       }
//     } );

//     tags.forEach( async tagName => {
//       if ( originalTagNames.indexOf( tagName ) === -1 ) {
//         const Tag = await tag.create( {
//           name: tagName[ i ],
//         } );

//         await Tag.addRecipe( Recipe );
//         await Recipe.addTag( Tag );
//       }
//     } );


//     await recipe.update( {
//       title,
//       content,
//     }, {
//       where: {
//         id,
//       },
//     } );

//     res.json( { status: true } );
//   }
//   catch ( err ) {
//     res.json( { status: false } );
//     console.error( err );
//   }
// } );

export default recipeRouter;
