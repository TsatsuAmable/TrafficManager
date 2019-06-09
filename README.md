# Traffic Manager1.0

**What Problem am I trying to Solve?**

Most of the roads I have to travel use dumb traffic light controllers that are not connected to anynetwork or coordinated by some intelligent realt-time adaptable system. This means that these systems are not able to respond smartly to emerging problems on the roads.
The efects of such inefficient traffic networks include:
1) Increased travel time
2) Loss of productive hours on a national scale (average number of extra hours spent commuting to work over inefficient road network (eH) x average number of working days in a month (wD) x workforce: number of workers ina country) 
3) Slugish traffic also contributes to higher emissions and fuel consumption which have economic and pulic health consequenses.

In most cases, the solution chosed by Governments in developing countries has been to recruit policemen to direct traffic (and override these systems) to improve efficiency and responsiveness, particularly at rush hour. Although this creates jobs, they are rather poor quality jobs (in my opion) and a waster of human resource (again, in my opinion).

These roads need a smart system to solve this problem. Such smart systems may require extensive rekitting of existing road infrastructure, with proprietary parts, as well as the purchase of expensive technology. Example [https://www.kyosan.co.jp/english/product/traffic01.html]

This problem of cost (there is always a problem of cost) is likely why many governements in the developing world have yet to swithc over to computer controlled systems. Road networks are huge and extensive. Any major change to road infrastructure runs into millions of dollars. 

**How TrafficManager will Solve the problem?**

Classes/ Architecture
Node		--> singleton that houses the whole infrastructure. Able to receive configuration via txt file some other data 				store
SignalColour	--> provides hardware coding for signal colour

SignalController--> Change Signal Colour
SignalTimer		--> determine time interval to next signal change based at first on some simple algorithm, and eventually 				on a ML model
DataLogger		--> epoch time, vehicle count, vehicle type
RoadState		--> will collect roadstate information:: computer vision & induction loops & radar gun input.
					final format not yet known, but will store epoch time, vehicle count, vehicle type
					
					
