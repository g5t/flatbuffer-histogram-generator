# Generate histogram data and put it in a `da00` flatbuffer

Currently only generates one flatbuffer and reports on its size.

This is intended for integration into, e.g., [event-formation-unit](https://github.com/ess-dmsc/event-formation-unit)
to test whether `da00` might be a suitable flatbuffer scheme for, e.g., histogrammed beam monitor data.

You must have the `da00` flatbuffer schema specification, most easily obtained by cloning the 
[streaming-data-types PR branch](https://github.com/ess-dmsc/streaming-data-types/pull/93)
after which CMake can be configured to compile the flatbuffer header by specifying, e.g.,

```cmd
$ cmake -S /home/.../flatbuffer-histogram-generator -B build -DSTREAMING_DATA_TYPES="/home/.../streaming-data-types"
```


## Use
At present, only the target `histogram_generator` is defined.
After configuring with CMake as above:

```cmd
$ cmake --build build
$ build/histogram_generator
Now we could send a flatbuffer with 1143256 bytes to topic some topic
```