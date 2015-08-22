/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface SASConfiguration : NSObject
+(id)md5HexDigest:(id)arg1 ;
+(id)appName;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)userAgent;
+(id)appBundleIdentifier;
+(id)architecture;
+(id)IPAddress;
-(void)setSiteID:(long long)arg1 baseURL:(id)arg2 ;
-(unsigned long long)masterURLTimestamp;
-(long long)siteID;
-(void)setMasterURLTimestamp:(unsigned long long)arg1 ;
-(void)resetUID;
-(void)disableIdentifierHashing;
-(void)setCoordinate:(CGSize)arg1 accuracy:(double)arg2 ;
-(void)setTestModeEnabled:(BOOL)arg1 ;
-(void)enableIdentifierHashing;
-(BOOL)isInTestMode;
-(double)locationHeading;
-(id)UID;
-(double)locationAccuracy;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)baseURL;
-(BOOL)isLoggingEnabled;
-(void)setHeading:(double)arg1 ;
-(void)setBaseURL:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(oneway void)release;
-(CGSize)locationCoordinate;
-(void)setLoggingEnabled:(BOOL)arg1 ;
@end
