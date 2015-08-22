/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface TFNTwitterScribeConfiguration : NSObject {

	BOOL _debugEnabled;
	BOOL _scribeEnabled;
	BOOL _thriftLoggingEnabled;
	BOOL _shouldScribeCrash;
	BOOL _shouldScribeError;
	BOOL _guestScribeEnabled;
	long long _maxSampleSize;

}

@property (getter=isScribeEnabled) BOOL scribeEnabled;                            //@synthesize scribeEnabled=_scribeEnabled - In the implementation block
@property (getter=isThriftLoggingEnabled) BOOL thriftLoggingEnabled;              //@synthesize thriftLoggingEnabled=_thriftLoggingEnabled - In the implementation block
@property (assign) BOOL shouldScribeCrash;                                        //@synthesize shouldScribeCrash=_shouldScribeCrash - In the implementation block
@property (assign) BOOL shouldScribeError;                                        //@synthesize shouldScribeError=_shouldScribeError - In the implementation block
@property (getter=isDebugEnabled) BOOL debugEnabled;                              //@synthesize debugEnabled=_debugEnabled - In the implementation block
@property (getter=isGuestScribeEnabled) BOOL guestScribeEnabled;                  //@synthesize guestScribeEnabled=_guestScribeEnabled - In the implementation block
@property (assign,nonatomic) long long maxSampleSize;                             //@synthesize maxSampleSize=_maxSampleSize - In the implementation block
+(id)sharedConfiguration;
-(BOOL)isGuestScribeEnabled;
-(BOOL)isThriftLoggingEnabled;
-(void)setScribeEnabled:(BOOL)arg1 ;
-(void)setThriftLoggingEnabled:(BOOL)arg1 ;
-(BOOL)shouldScribeCrash;
-(void)setShouldScribeCrash:(BOOL)arg1 ;
-(BOOL)shouldScribeError;
-(void)setShouldScribeError:(BOOL)arg1 ;
-(void)setGuestScribeEnabled:(BOOL)arg1 ;
-(void)setMaxSampleSize:(long long)arg1 ;
-(BOOL)isScribeEnabled;
-(long long)maxSampleSize;
-(id)init;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(BOOL)isDebugEnabled;
@end
