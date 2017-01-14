Copyright 2014 - The CyanogenMod Project
===================================

Device configuration for Samsung Galaxy Tab3 Lite SM-T116 (goyave3g)

		instruction how to build

I think you already set up build enviroment so I will skip this.
First go to your working dir/build/tools/device and open in gedit makerecoveries.sh
Find line 
		make -j16 recoveryzip
and replace it with
		make recoveryzip
beacause it wont eat your RAM and build will be faster


After you finshed repo sync go in your working dir/device/
and create folder /samsung/goyave3g and copy content of goyave3g
that you downloaded from here.

For build recovery, run this command in terminal from your working dir 

		. build/envsetup.sh
		lunch cm_goyave3g-userdebug && make recoveryimage

Your build will start and you will find your recovery.img in your working dir/out/target/product/goyave3g

To make it flashable via ODIN you have to make it recovery.tar.md5
Navigate with terminal where you save your recovey.img .
For example cd android/out/target/product/goyave3g
where android is name of your working dir
and run command:

		tar -H ustar -c recovery.img > recovery.tar
		md5sum -t recovery.tar >> recovery.tar
		mv recovery.tar recovery.tar.md5
        
An now you got recovery.tar.md5 ready to be flashed usin ODIN selected as PDA file

And for build rom, run this command in terminal from your working dir 

		. build/envsetup.sh && brunch goyave3g

Good luck and Happy building. (^_^)/



To apply patches 
for example:  audio.patch
 got to frameworks/av  copy the patch in that directory and open 
terminal and run command 
where 1st command is to apply patch and 
the 2nd for to revert the patches which applied earlier

		patch -p1 < audio.patch
		patch -R -p1 <audio.patch
		
		fix any .rej files manually
		Run the copy script!!!!!!!!!!
			./copy
