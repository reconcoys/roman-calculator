# Roman Calculator

This project enables you to both add two Roman numerals together and subtract them.

Note: in order to run this, you must have installed the following packages in Ubuntu:

check, pkg-config, libbsd-dev

## Running

Build and run all tests with ```make```

## Testing in Ubuntu 14.04 with Docker (Project can only run in Ubuntu)

* ```docker build -t ubuntu-roman .```

* ```docker run -it ubuntu-roman /bin/bash```
* ```cd tmp```
* ```make```
