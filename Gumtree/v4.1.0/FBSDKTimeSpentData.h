/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface FBSDKTimeSpentData : NSObject {

	BOOL _isCurrentlyLoaded;
	BOOL _shouldLogActivateEvent;
	BOOL _shouldLogDeactivateEvent;
	long long _secondsSpentInCurrentSession;
	long long _timeSinceLastSuspend;
	int _numInterruptionsInCurrentSession;
	long long _lastRestoreTime;
	long long _numSecondsIdleToBeNewSession;

}

@property (assign,nonatomic) long long numSecondsIdleToBeNewSession;              //@synthesize numSecondsIdleToBeNewSession=_numSecondsIdleToBeNewSession - In the implementation block
+(void)setSourceApplication:(id)arg1 openURL:(id)arg2 ;
+(void)registerAutoResetSourceApplication;
+(void)setSourceApplication:(id)arg1 isFromAppLink:(BOOL)arg2 ;
+(id)getSourceApplication;
+(void)resetSourceApplication;
+(void)restore:(BOOL)arg1 ;
+(void)suspend;
+(id)singleton;
-(void)instanceSuspend;
-(void)instanceRestore:(BOOL)arg1 ;
-(long long)numSecondsIdleToBeNewSession;
-(void)setNumSecondsIdleToBeNewSession:(long long)arg1 ;
-(id)init;
@end
