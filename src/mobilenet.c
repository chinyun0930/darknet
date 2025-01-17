
[net]
batch=32
subdivisions=1
height=224
width=224
channels=3
momentum=0.9
decay=0.000
max_crop=320
 
learning_rate=0.1
policy=poly
power=3
max_batches=1600000
 
#conv1 
[convolutional]
batch_normalize=1
filters=32
size=3
stride=2
pad=1
activation=relu
 
#conv2_1/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv2_1/sep
[convolutional]
batch_normalize=1
filters=64
size=1
stride=1
pad=0
activation=relu
 
 
#conv2_2/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=2
pad=1
activation=relu
 
#conv2_2/sep
[convolutional]
batch_normalize=1
filters=128
size=1
stride=1
pad=0
activation=relu
 
#conv3_1/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
 
#conv3_1/sep
[convolutional]
batch_normalize=1
filters=128
size=1
stride=1
pad=0
activation=relu
 
#conv3_2/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=2
pad=1
activation=relu
 
#conv3_2/sep
[convolutional]
batch_normalize=1
filters=256
size=1
stride=1
pad=0
activation=relu
 
#conv4_1/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv4_1/sep
[convolutional]
batch_normalize=1
filters=256
size=1
stride=1
pad=0
activation=relu
 
#conv4_2/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=2
pad=1
activation=relu
 
#conv4_2/sep
[convolutional]
batch_normalize=1
filters=512
size=1
stride=1
pad=0
activation=relu
 
#conv5_1/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv5_1/sep
[convolutional]
batch_normalize=1
filters=512
size=1
stride=1
pad=0
activation=relu
 
#conv5_2/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv5_2/sep
[convolutional]
batch_normalize=1
filters=512
size=1
stride=1
pad=0
activation=relu
 
#conv5_3/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv5_3/sep
[convolutional]
batch_normalize=1
filters=512
size=1
stride=1
pad=0
activation=relu
 
#conv5_4/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv5_4/sep
[convolutional]
batch_normalize=1
filters=512
size=1
stride=1
pad=0
activation=relu
 
#conv5_5/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv5_5/sep
[convolutional]
batch_normalize=1
filters=512
size=1
stride=1
pad=0
activation=relu
 
#conv5_6/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=2
pad=1
activation=relu
 
#conv5_6/sep
[convolutional]
batch_normalize=1
filters=1024
size=1
stride=1
pad=0
activation=relu
 
#conv6/dw
[depthwise_convolutional]
batch_normalize=1
size=3
stride=1
pad=1
activation=relu
 
#conv6/sep
[convolutional]
batch_normalize=1
filters=1024
size=1
stride=1
pad=0
activation=relu
 
#pool6
[avgpool]
 
#fc7
[convolutional]
filters=1000
size=1
stride=1
pad=0
activation=leaky
 
[softmax]
groups=1
 
[cost]
