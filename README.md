# Factory Class Example

To build cd into the repo then run

Configure step
```
cmake -S . -B build
```
Build step 
```
cmake --build build 
```

To run tests
```
cmake --build build --target test
```

You can also run the tests directly cd into the build folder

```
cd ./build/tests/unit
```

Run the executable directly
```
./unit_test_dog_factory
```
