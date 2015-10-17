/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:49 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, PLVUserPreferences;

@interface PLVIRCConnectionManager : NSObject {

	NSArray* _ircConnections;
	unsigned long long _backgroundTask;

}

@property (nonatomic,copy) NSArray * ircConnections;                              //@synthesize ircConnections=_ircConnections - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTask;                   //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,readonly) PLVUserPreferences * userPreferences; 
-(PLVUserPreferences *)userPreferences;
-(void)setIrcConnections:(NSArray *)arg1 ;
-(NSArray *)ircConnections;
-(unsigned long long)backgroundTask;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)setBackgroundTask:(unsigned long long)arg1 ;
-(void)addConnection:(id)arg1 ;
@end

