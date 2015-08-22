/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSScribeOutgoingEventsHandler.h>

@class NSURL, TFNTwitterScribeImpressionLogger, NSNumber, NSString;

@interface TFNScribeGuestAuthRequestHandler : NSObject <TFSScribeOutgoingEventsHandler> {

	NSURL* _overridenScribeURL;
	TFNTwitterScribeImpressionLogger* _impressionLogger;
	NSNumber* _userID;

}

@property (nonatomic,retain) NSURL * overridenScribeURL;                                       //@synthesize overridenScribeURL=_overridenScribeURL - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeImpressionLogger * impressionLogger;              //@synthesize impressionLogger=_impressionLogger - In the implementation block
@property (nonatomic,retain) NSNumber * userID;                                                //@synthesize userID=_userID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserID:(NSNumber *)arg1 ;
-(void)setOverridenScribeURL:(NSURL *)arg1 ;
-(TFNTwitterScribeImpressionLogger *)impressionLogger;
-(void)handleScribeOutgoingEvents:(id)arg1 eventParameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)eventsForImpressionsBatch:(id)arg1 ;
-(void)setImpressionLogger:(TFNTwitterScribeImpressionLogger *)arg1 ;
-(NSURL *)overridenScribeURL;
-(NSNumber *)userID;
@end
