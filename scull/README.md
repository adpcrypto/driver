**Loading the Module**

sudo insmod ./{name}.ko

We can find it loaded in /proc/modules, need to register it to find it in /proc/devices

**Unloading the Module**

sudo rmmod {name}
