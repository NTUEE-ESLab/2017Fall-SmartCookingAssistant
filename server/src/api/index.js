import { Router } from 'express';

import recipeRouter from './recipe';

const router = new Router();

router.use( '/recipes', recipeRouter );

export default router;
