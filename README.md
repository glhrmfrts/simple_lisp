# simple_lisp
A simple lisp interpreter

## functions

### math

| function       |  description                  |
| -------------  | ------------                  |
| ```(+ a b)```  | add numbers or vectors |
| ```(- a b)```  | subtract numbers |
| ```(* a b)```  | multiply numbers or vectors |
| ```(/ a b)``` | divide numbers |

### boolean
| function       |  description                  |
| -------------  | ------------                  |
| ```(if arg fn1 fn2)``` | executes `fn1` if `arg` is true, otherwise execute `fn2` |
| ```(when arg fn1)``` | executes `fn1` if `arg` is true |

### io

| function       |  description                  |
| -------------  | ------------                  |
| ```(println args...)```  | print stuff to stdout with a line at the end|
| ```(read filename)```  | read a file's content |

### coroutine

| function          |  description                  |
| -------------     | ------------                  |
| ```(coroutine fn)``` | creates a new coroutine with the passed function |
| ```(call co)```      | calls the coroutine from where it's paused (or from the beginning if it hasn't been called yet) |
| ```(yield [arg])```    | pauses the current function and return `arg` to the caller |
| ```(done? co)``` | returns true if the coroutine has reached the end of it's function |