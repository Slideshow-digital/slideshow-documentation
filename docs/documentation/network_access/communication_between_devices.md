# Communication between devices

Multiple devices / players with Slideshow app installed can communicate directly between each other using a proprietary protocol, which can be used for light monitoring, management and synchronized playback between devices.

The group is defined by setting `Devices group code`, only devices with the same group code can communicate with each other.

- **LAN** – If the devices are on the same local network (LAN), they can discover each other automatically using UDP multicast. This might not work correctly over WiFi (prefer wired connection) or if the router blocks direct communication between devices.
- **WAN** – Direct peer-to-peer (P2P) communication between devices that are not on the same local network is sometimes possible, but usually requires support for UPnP (Universal Plug and Play) on the router. Communication might not work if more than one NAT is used, or if your internet provider uses Carrier-grade NAT. Enable setting `Enable device discovery` on the internet in order to allow discovery of devices not on the same local network.

!!! warning "Security notice"
    Make sure you don’t share your "Devices group code" with anybody, as it is used also as a security code for establishing the communication between devices.
	
!!! warning "Change the default web interface credentials"
    If you enable device discovery on the internet, we highly suggest changing the default username/password for the web interface as well.

Overview of discovered devices together with available commands can be viewed via Slideshow’s web interface → menu `Settings` → `Other devices`. For devices that are on a different local network there is a `Tunnel web interface` button as well, which opens a new browser window with the web interface of that device, even if your computer is on a different local network. Only a single tunnel can be opened at any time. The transfer speed through the tunnel is much lower than the usual network speed.

![Other devices page in Slideshow's web interface](other_devices_web.png)
/// caption
Other devices page in Slideshow's web interface
///

## Tutorial

<iframe style="width: 100%; aspect-ratio: 16 / 9;" src="https://www.youtube.com/embed/Cb20UJjIEXI?feature=oembed&start&end&wmode=opaque&loop=0&controls=1&mute=0&rel=0&modestbranding=0" frameborder="0" allowfullscreen></iframe>
