/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface GADGestureIdUtil : NSObject {

	NSUserDefaults* userDefaults_;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults; 
+(void)getOSMajor:(int*)arg1 minor:(int*)arg2 bugFix:(int*)arg3 ;
+(BOOL)isOSAtLeastMajor:(int)arg1 minor:(int)arg2 bug:(int)arg3 ;
+(id)sharedInstance;
-(BOOL)deviceOptedOut;
-(id)deviceIdentifierType;
-(void)dealloc;
-(id)init;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)osVersion;
-(id)deviceIdentifier;
@end
