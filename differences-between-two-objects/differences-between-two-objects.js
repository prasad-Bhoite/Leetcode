/**
 * @param {object} obj1
 * @param {object} obj2
 * @return {object}
 */
function objDiff(obj1, obj2) {
    // Special case: Objects are the same
    if (obj1 === obj2) return {};

    // Special cases: Null values or different types
    if (obj1 === null || obj2 === null) return [obj1, obj2];
    if (typeof obj1 !== 'object' || typeof obj2 !== 'object') return [obj1, obj2];
    if (Array.isArray(obj1) !== Array.isArray(obj2)) return [obj1, obj2];

    const diffObj = {}; // Object to store the differences

    // Iterate over the keys in obj1Ï
    Object.keys(obj1).forEach(key => {
        if (key in obj2) {
            const subDiff = objDiff(obj1[key], obj2[key]); // Recursive call for nested objects

            // If there are differences, add them to the diffObj
            if (Object.keys(subDiff).length > 0) {
                diffObj[key] = subDiff;
            }
        }
    })

    return diffObj; // Return the object containing the differences
};