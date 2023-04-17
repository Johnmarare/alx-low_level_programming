#ifndef ABSOLUTE_LIKE_H

#define ABSOLUTE_LIKE_H
/**
 * ABS - Computes the absolute value of a number
 * @x: number to be computed
 * Description: the paranthesis are imporntant to avoid
 *		unwanted expantion that may result to
 *		wrong answers. therefore -(x) is better
 *		than (-x)
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif
