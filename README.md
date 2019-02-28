# using

Context managers for Carp. An experiment.

## Installation

You can include `using` in your project like this:

````clojure
(load git@github.com:carpentry-org/using@0.0.1")
```

## Usage

`using` relies on the interface `close`, which will take in a resource of some
kind, clean it up, and return nothing—which is an unpretentious name for `()`,
the unit type.

If that function is defined, you can do things like that:

```
(using (File.open "example") f
  (IO.println &(File.read-all &f)))
```

The file that was opened will be automatically closed once the scope is exited.

So, to reiterate: all you need to work with `using` is to have a function
`close` that works on your type! It’s like manual borrow-checking for resource
things! Nifty, eh?

<hr/>

Have fun!
