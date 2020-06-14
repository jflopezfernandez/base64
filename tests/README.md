# Base64 Testing and Development Plan
This document will eventually contain the testing, design, and development plan
for the application, but it is very much still a work in progress at the moment.

## Test Case Specifications
The following table contains the current test case specifications for all of the
test suites that have been defined (all one of them at the moment).

| Test Case | Summary | Status |
| :-------: | :-----: | :----: |
| TS1-1 | Returns `NULL` if input string is `NULL`. | PASS |
| TS1-2 | Encoding an empty string yields an empty string. | - |
| TS1-3 | Encoding `horse` yields `aG9yc2U=`. | - |
| TS1-4 | Encoding `cow` yields `Y293`. | - |
| TS1-5 | Encoding `dog` yields `ZG9n`. | - |
| TS1-6 | Encoding `Cheeze whiz` yields `Q2hlZXplIHdoaXo=`. | - |
