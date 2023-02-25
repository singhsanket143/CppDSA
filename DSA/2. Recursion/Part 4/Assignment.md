Q1: Take as input str, a string. Write a recursive function which returns a new string in
which all duplicate consecutive characters are separated by a `*`. E.g. for
`hello` return `hel*lo`. Print the value returned.


Q2: Take as input str, a string. Write a recursive function which returns a new string in
which all duplicate consecutive characters are reduced to a single char. E.g. for
`hello` return `helo`. Print the value returned.

Q3: Take as input str, a string. Write a recursive function which moves all `x` from the
string to its end. E.g. for `abexexdexed` return `abeedeedxxx`. Print the value
returned.

Q4: Take as input str, a string. Write a recursive function that checks if the string was
generated using the following rules and returns a Boolean value:

    -  the string begins with an 'a'
    -  each 'a' is followed by nothing or an 'a' or "bb"
    -  each "bb" is followed by nothing or an 'a'

Q5: Take as input str, a string. We are concerned with all the possible ascii-
subsequences of str. E.g. “ab” has following ascii-subsequences ``, `b`, `98`,
`a`, `ab`, `a98`, `97`, `97b`, `9798`
Write a recursive function which prints all possible ascii-subsequences for a
given string (void is the return type for function).