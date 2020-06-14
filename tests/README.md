# Base64 Testing and Development Plan
This document will eventually contain the testing, design, and development plan
for the application, but it is very much still a work in progress at the moment.

## Test Case Specifications
The following table contains the current test case specifications for all of the
test suites that have been defined (all one of them at the moment).

| Test Case | Summary | Status |
| :-------: | :-----: | :----: |
| TS1-1 | Returns `NULL` with an output length of `0` if input string is `NULL`. | PASS |
| TS1-2 | Returns `NULL` with an output length of `0` if input length is `0`. | PASS |
| TS1-3 | Encoding `horse` yields `aG9yc2U=`. | FAIL |
