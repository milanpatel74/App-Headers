/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(id)deviceIdentifier;
-(id)osVersion;
@end
