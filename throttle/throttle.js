var throttle = function (fn, t) {
    let lastRunTime = Date.now() - 2 * t
    let timer
    return function (...args) {
        const now = Date.now()
        if (now >= lastRunTime + t) {
            lastRunTime = now
            fn(...args)
        } else {
            clearTimeout(timer)
            timer = setTimeout(() => {
                lastRunTime = Date.now()
                fn(...args)
            }, lastRunTime + t - now)
        }
    }
};
