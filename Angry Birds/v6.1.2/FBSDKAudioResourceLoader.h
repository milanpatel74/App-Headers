/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject {

	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned _systemSoundID;

}
+(id)name;
+(id)data;
+(unsigned long long)version;
+(id)sharedLoader;
-(BOOL)loadSound:(id*)arg1 ;
-(id)_fileURL:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)playSound;
@end
