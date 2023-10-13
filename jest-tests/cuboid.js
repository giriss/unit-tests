const { Rectangle } = require('./rectangle')

/**
 * Represents a cuboid with a rectangular base and a given height.
 */
class Cuboid {
  /**
   * Creates a new Cuboid with a rectangular base.
   * @param {Rectangle} base - The rectangular base of the cuboid.
   * @param {number} height - The height of the cuboid.
   */
  constructor(base, height) {
    this.base = base
    this.height = height
  }

  /**
   * Calculates the volume of the cuboid.
   * @returns {number} The volume of the cuboid.
   */
  volume() {
    return this.base.area() * this.height
  }

  /**
   * Calculates the surface area of the cuboid.
   * @returns {number} The surface area of the cuboid.
   */
  surfaceArea() {
    const lw = this.base.area()
    const lh = this.base.length * this.height
    const wh = this.base.width * this.height
    return 2 * (lw + lh + wh)
  }
}

/**
 * Represents a cube, which is a special case of a cuboid with all sides equal.
 */
class Cube extends Cuboid {
  /**
   * Creates a new Cube with a given side length.
   * @param {number} sideLength - The length of each side of the cube.
   */
  constructor(sideLength) {
    super(new Rectangle(sideLength, sideLength), sideLength)
  }
}

module.exports = { Cuboid, Cube }
