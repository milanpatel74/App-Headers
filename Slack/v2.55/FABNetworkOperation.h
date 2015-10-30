/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/FABAsynchronousOperation.h>

@class NSString;

@interface FABNetworkOperation : FABAsynchronousOperation {

	NSString* _APIKey;

}

@property (nonatomic,readonly) NSString * APIKey;              //@synthesize APIKey=_APIKey - In the implementation block
-(id)mutableRequestWithDefaultHTTPHeadersForURL:(id)arg1 timeout:(double)arg2 ;
-(NSString *)APIKey;
-(id)initWithAPIKey:(id)arg1 ;
-(id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg1 ;
-(id)localeIdentifier;
-(id)userAgentString;
@end
