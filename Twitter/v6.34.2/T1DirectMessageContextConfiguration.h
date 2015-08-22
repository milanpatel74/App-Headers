/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNDirectMessageContextConfiguration.h>

@interface T1DirectMessageContextConfiguration : NSObject <TFNDirectMessageContextConfiguration> {

	BOOL _acceptsDirectMessagesFromAnyone;
	BOOL _isDirectMessagesRealTimeSearchEnabled;
	BOOL _shouldShowSensitiveMedia;
	BOOL _shouldShowSensitiveContent;
	BOOL _alwaysShowSensitiveMedia;
	BOOL _supportsReadOnlyMode;
	unsigned long long _maximumConversationParticipantCount;
	long long _serviceFailurePermittedRetryCount;
	double _networkFailureMinRetryDelay;
	double _networkFailureMaxRetryDelay;
	double _httpRequestTotalTimeout;
	double _httpRequestMinIdleTimeout;
	double _httpRequestMaxIdleTimeout;

}

@property (nonatomic,readonly) BOOL isDirectMessagesRealTimeSearchEnabled;                          //@synthesize isDirectMessagesRealTimeSearchEnabled=_isDirectMessagesRealTimeSearchEnabled - In the implementation block
@property (nonatomic,readonly) BOOL acceptsDirectMessagesFromAnyone;                                //@synthesize acceptsDirectMessagesFromAnyone=_acceptsDirectMessagesFromAnyone - In the implementation block
@property (nonatomic,readonly) BOOL supportsReadOnlyMode;                                           //@synthesize supportsReadOnlyMode=_supportsReadOnlyMode - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumConversationParticipantCount;              //@synthesize maximumConversationParticipantCount=_maximumConversationParticipantCount - In the implementation block
@property (nonatomic,readonly) long long serviceFailurePermittedRetryCount;                         //@synthesize serviceFailurePermittedRetryCount=_serviceFailurePermittedRetryCount - In the implementation block
@property (nonatomic,readonly) double networkFailureMinRetryDelay;                                  //@synthesize networkFailureMinRetryDelay=_networkFailureMinRetryDelay - In the implementation block
@property (nonatomic,readonly) double networkFailureMaxRetryDelay;                                  //@synthesize networkFailureMaxRetryDelay=_networkFailureMaxRetryDelay - In the implementation block
@property (nonatomic,readonly) double httpRequestTotalTimeout;                                      //@synthesize httpRequestTotalTimeout=_httpRequestTotalTimeout - In the implementation block
@property (nonatomic,readonly) double httpRequestMinIdleTimeout;                                    //@synthesize httpRequestMinIdleTimeout=_httpRequestMinIdleTimeout - In the implementation block
@property (nonatomic,readonly) double httpRequestMaxIdleTimeout;                                    //@synthesize httpRequestMaxIdleTimeout=_httpRequestMaxIdleTimeout - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSensitiveContent;                                     //@synthesize shouldShowSensitiveContent=_shouldShowSensitiveContent - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowSensitiveMedia;                                         //@synthesize alwaysShowSensitiveMedia=_alwaysShowSensitiveMedia - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSensitiveMedia;                                       //@synthesize shouldShowSensitiveMedia=_shouldShowSensitiveMedia - In the implementation block
-(unsigned long long)maximumConversationParticipantCount;
-(BOOL)supportsReadOnlyMode;
-(BOOL)acceptsDirectMessagesFromAnyone;
-(BOOL)alwaysShowSensitiveMedia;
-(void)setAlwaysShowSensitiveMedia:(BOOL)arg1 ;
-(BOOL)isDirectMessagesRealTimeSearchEnabled;
-(void)_setupRetryConfigurationsWithAccount:(id)arg1 ;
-(long long)serviceFailurePermittedRetryCount;
-(double)networkFailureMinRetryDelay;
-(double)networkFailureMaxRetryDelay;
-(double)httpRequestTotalTimeout;
-(double)httpRequestMinIdleTimeout;
-(double)httpRequestMaxIdleTimeout;
-(BOOL)shouldShowSensitiveContent;
-(BOOL)shouldShowSensitiveMedia;
-(id)initWithAccount:(id)arg1 ;
@end
