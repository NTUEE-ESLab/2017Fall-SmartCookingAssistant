module.exports = ( sequelize, DataTypes ) => {
  const recipe = sequelize.define( 'recipe', {
    id: {
      allowNull: false,
      primaryKey: true,
      type: DataTypes.INTEGER,
      autoIncrement: true,
    },
    title: {
      allowNull: false,
      type: DataTypes.TEXT,
    },
    content: {
      allowNull: false,
      type: DataTypes.JSON,
    },
    createdAt: {
      allowNull: true,
      type: DataTypes.DATE,
    },
    updatedAt: {
      allowNull: true,
      type: DataTypes.DATE,
    },
  }, {
    classMethods: {
      associate( db ) {
      },
    },
  } );

  return recipe;
};
