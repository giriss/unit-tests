/**
 * Represents a rectangle with a given length and width.
 */
class Rectangle {
  /**
   * Creates a new Rectangle.
   * @param {number} length - The length of the rectangle.
   * @param {number} width - The width of the rectangle.
   */
  constructor(length, width) {
    this.length = length
    this.width = width
  }

  /**
   * Calculates the area of the rectangle.
   * @returns {number} The area of the rectangle.
   */
  area() {
    return this.length * this.width
  }

  /**
   * Calculates the circumference (perimeter) of the rectangle.
   * @returns {number} The circumference of the rectangle.
   */
  circumference() {
    return 2 * (this.length + this.width)
  }
}

/**
 * Represents a square, which is a special case of a rectangle with equal sides.
 */
class Square extends Rectangle {
  /**
   * Creates a new Square with a given side length.
   * @param {number} sideLength - The length of each side of the square.
   */
  constructor(sideLength) {
    super(sideLength, sideLength)
  }
}

module.exports = { Rectangle, Square }
