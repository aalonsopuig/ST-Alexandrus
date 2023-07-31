ST-Alexandrus is an hexapod of one degrees of freedom by leg based on the structure of Stiquito (<a href="http://www.stiquito.com/">www.stiquito.com</a>). I made it on Dec. 2002<br />
<br />
The locomotion system is based on muscle wires of Nitinol.<br />
<br />
Its mission consists of moving as far as possible avoiding the obstacles that are in their way.<br />
<br />
<table align="center" cellpadding="0" cellspacing="0" class="tr-caption-container" style="margin-left: auto; margin-right: auto; text-align: center;"><tbody>
<tr><td style="text-align: center;"><a href="http://1.bp.blogspot.com/-aUERa_qw51A/Uu42Qb_OZaI/AAAAAAAAJiA/HWdhl4JWxL0/s1600/st-alex.jpg" imageanchor="1" style="margin-left: auto; margin-right: auto;"><img border="0" src="http://1.bp.blogspot.com/-aUERa_qw51A/Uu42Qb_OZaI/AAAAAAAAJiA/HWdhl4JWxL0/s1600/st-alex.jpg" height="300" width="400" /></a></td></tr>
<tr><td class="tr-caption" style="text-align: center;">ST-Alexandrus Robot</td></tr>
</tbody></table>
<br />
<b>Muscle Wires</b><br />
<br />
The muscle wire is an alloy (Nitinol) that belongs to the group of the so called materials with form memory. The wire is compressed between 3 and 5% of its length when warming up itself by the passage of an electrical current and return to its normal state when cooling off (annulling the passage of electrical current). The contraction is fast (0.5 sg), but the relaxation is slower as thicker is the muscle wire, varying between 0.7 sg for a wire of 37 micrometers and 14.5 sg for one of 375 micrometers.<br />
<br />
<div class="separator" style="clear: both; text-align: center;">
<object width="320" height="266" class="BLOGGER-youtube-video" classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=6,0,40,0" data-thumbnail-src="https://ytimg.googleusercontent.com/vi/N188-MJZrzo/0.jpg"><param name="movie" value="https://youtube.googleapis.com/v/N188-MJZrzo&source=uds" /><param name="bgcolor" value="#FFFFFF" /><param name="allowFullScreen" value="true" /><embed width="320" height="266"  src="https://youtube.googleapis.com/v/N188-MJZrzo&source=uds" type="application/x-shockwave-flash" allowfullscreen="true"></embed></object></div>
<br />
These long times of relaxation and small ratios of compression will imply that the robot moves slowly, with very short and slowed down steps.<br />
<br />
<br />
<b>Legs structure</b><br />
<br />
The legs are made with steel wire and therefore they are relatively elastic.<br />
<br />
Each leg has an only muscle wire that moves backwards the leg when being compressed (applying electrical current).<br />
<br />
<div class="separator" style="clear: both; text-align: center;">
<a href="http://1.bp.blogspot.com/-tQvgcaidVSs/Uu42qhdsgKI/AAAAAAAAJiI/cjciMbZjPFs/s1600/legs.jpg" imageanchor="1" style="margin-left: 1em; margin-right: 1em;"><img border="0" src="http://1.bp.blogspot.com/-tQvgcaidVSs/Uu42qhdsgKI/AAAAAAAAJiI/cjciMbZjPFs/s1600/legs.jpg" height="190" width="400" /></a></div>
<br />
The meeting point between the leg and the ground is slightly inclined backwards to assure the adhesion to the ground in the backwards movements of the leg and to reduce this adhesion in the forwards movements of the leg, necessary to allow him to walk since when having an only degree of freedom, only could drag the legs over the ground.<br />
<br />
When we stop applying electrical current to the muscle wire it cools off and stretches to its rest position. Since the leg is of steel wire, its elasticity tends to move forwards the leg until its rest position.<br />
<br />
Due to this structure of legs the robot cannot walk backwards.<br />
<br />
<br />
<b>Electronic circuit</b><br />
<br />
Basically it is a control system by microcontroller PIC16F84 and a driver of 8 channels (open collector) of which will be used 6 to give to the muscle wires the current that need to be compressed.<br />
<br />
He has contact sensors (bumpers) in the frontal part (antennas) that allow to detect obstacles.<br />
<br />
Next is the electrical scheme:<br />
<br />
<div class="separator" style="clear: both; text-align: center;">
<a href="http://2.bp.blogspot.com/-ZI0Mk67KEZ8/Uu425WS0eCI/AAAAAAAAJiQ/0LYMTvU8ZMo/s1600/scheme.png" imageanchor="1" style="margin-left: 1em; margin-right: 1em;"><img border="0" src="http://2.bp.blogspot.com/-ZI0Mk67KEZ8/Uu425WS0eCI/AAAAAAAAJiQ/0LYMTvU8ZMo/s1600/scheme.png" height="247" width="400" /></a></div>
<br />
The circuit includes a diode to prevent errors with polarity when connecting the battery and a 5v regulator to be able to use external feeding to 9v.<br />
<br />
<div class="separator" style="clear: both; text-align: center;">
<a href="http://3.bp.blogspot.com/-Ne-zWWUb6qk/Uu43HSMlc6I/AAAAAAAAJiY/-tYVsQ_A3xA/s1600/board.png" imageanchor="1" style="margin-left: 1em; margin-right: 1em;"><img border="0" src="http://3.bp.blogspot.com/-Ne-zWWUb6qk/Uu43HSMlc6I/AAAAAAAAJiY/-tYVsQ_A3xA/s1600/board.png" height="146" width="400" /></a></div>
<br />
Terminals "PROG" allow ICSP programming (In Circuit Serial Programming) of the microcontroller already mounted in plate.<br />
<br />
Terminals "IZDA" (Left) and "DCHA" (Right) correspond to the connections to the muscle wires of the legs. All the muscle wires have on common end and the other connected to each one of these pins. The common end, that correspond with the union of the muscle wire with the leg of steel wire, will be connected to the positive of the battery, between the diode and the voltage regulator.<br />
<br />
<div class="separator" style="clear: both; text-align: center;">
<a href="http://4.bp.blogspot.com/-0KYZpz5SdXI/Uu43UA4NuGI/AAAAAAAAJig/XE-b6awo9bU/s1600/enstparts.jpg" imageanchor="1" style="margin-left: 1em; margin-right: 1em;"><img border="0" src="http://4.bp.blogspot.com/-0KYZpz5SdXI/Uu43UA4NuGI/AAAAAAAAJig/XE-b6awo9bU/s1600/enstparts.jpg" height="352" width="400" /></a></div>
<br />
&nbsp;<b>Software</b><br />
<br />
The programming has been made in C language, using the freeware cross compiler PICC Lite of HTSOFT<br />
<br />
The algorithm is simple. Simply it makes the robot move by moving the legs three by three so that they always form a support triangle. When one of the antennas detects an obstacle, the robot moves only the legs of a side one to one to force the turn since as it has been mentioned before, the robot cannot walk backwards.<br />
<br />
The code is suitably commented for its understanding.<br />
<br />
<br />

<br />
