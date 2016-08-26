/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBHttpRequest.h>

@class NSURLRequest, NSString, NSSet, FBScenePath;

@interface FBMutableHttpRequest : NSObject <FBHttpRequest> {

	BOOL _allowRetry;
	BOOL _disableCustomProtocols;
	BOOL _silentLoading;
	BOOL _shouldHandleCookies;
	BOOL _enableAuthentication;
	BOOL _shouldContinueInBackground;
	BOOL _piggyBackRequest;
	NSURLRequest* _request;
	NSString* _logNamespace;
	NSString* _logName;
	long long _priority;
	NSSet* _analyticsTags;
	unsigned long long _priorityOrder;
	unsigned long long _hardTimeout;
	NSString* _actorForAuthentication;
	FBScenePath* _scenePath;

}

@property (nonatomic,retain) NSURLRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * logNamespace;                         //@synthesize logNamespace=_logNamespace - In the implementation block
@property (nonatomic,copy) NSString * logName;                              //@synthesize logName=_logName - In the implementation block
@property (assign,nonatomic) long long priority;                            //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSSet * analyticsTags;                           //@synthesize analyticsTags=_analyticsTags - In the implementation block
@property (assign,nonatomic) unsigned long long priorityOrder;              //@synthesize priorityOrder=_priorityOrder - In the implementation block
@property (assign,nonatomic) BOOL allowRetry;                               //@synthesize allowRetry=_allowRetry - In the implementation block
@property (assign,nonatomic) BOOL disableCustomProtocols;                   //@synthesize disableCustomProtocols=_disableCustomProtocols - In the implementation block
@property (assign,nonatomic) BOOL silentLoading;                            //@synthesize silentLoading=_silentLoading - In the implementation block
@property (assign,nonatomic) unsigned long long hardTimeout;                //@synthesize hardTimeout=_hardTimeout - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleCookies;                      //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (assign,nonatomic) BOOL enableAuthentication;                     //@synthesize enableAuthentication=_enableAuthentication - In the implementation block
@property (nonatomic,copy) NSString * actorForAuthentication;               //@synthesize actorForAuthentication=_actorForAuthentication - In the implementation block
@property (assign,nonatomic) BOOL shouldContinueInBackground;               //@synthesize shouldContinueInBackground=_shouldContinueInBackground - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                     //@synthesize scenePath=_scenePath - In the implementation block
@property (assign,nonatomic) BOOL piggyBackRequest;                         //@synthesize piggyBackRequest=_piggyBackRequest - In the implementation block
-(void)setLogNamespace:(NSString *)arg1 ;
-(void)setAllowRetry:(BOOL)arg1 ;
-(void)setHardTimeout:(unsigned long long)arg1 ;
-(BOOL)shouldContinueInBackground;
-(FBScenePath *)scenePath;
-(void)setShouldContinueInBackground:(BOOL)arg1 ;
-(NSSet *)analyticsTags;
-(void)setPiggyBackRequest:(BOOL)arg1 ;
-(void)setDisableCustomProtocols:(BOOL)arg1 ;
-(BOOL)allowRetry;
-(unsigned long long)hardTimeout;
-(BOOL)disableCustomProtocols;
-(NSString *)logNamespace;
-(void)setAnalyticsTags:(NSSet *)arg1 ;
-(void)setSilentLoading:(BOOL)arg1 ;
-(unsigned long long)priorityOrder;
-(BOOL)piggyBackRequest;
-(BOOL)silentLoading;
-(BOOL)enableAuthentication;
-(NSString *)actorForAuthentication;
-(void)setPriorityOrder:(unsigned long long)arg1 ;
-(void)setEnableAuthentication:(BOOL)arg1 ;
-(void)setActorForAuthentication:(NSString *)arg1 ;
-(BOOL)shouldHandleCookies;
-(void)setShouldHandleCookies:(BOOL)arg1 ;
-(NSURLRequest *)request;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setLogName:(NSString *)arg1 ;
-(NSString *)logName;
@end
