/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotWatchMessageObject.h>

@class NSDictionary, NSDate, NSString, PTHTweetbotObjectDescriptor;

@interface PTHTweetbotWatchInteraction : NSObject <PTHTweetbotWatchMessageObject> {

	unsigned char _type;
	long long _accountTID;
	NSDate* _createdAt;
	long long _sourceUserTID;
	long long _sourceStatusTID;
	long long _targetStatusTID;
	NSString* _sourceUserScreenName;
	NSString* _sourceStatusText;
	NSString* _targetStatusText;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) long long accountTID;                                                           //@synthesize accountTID=_accountTID - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                                                             //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) unsigned char type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long sourceUserTID;                                                        //@synthesize sourceUserTID=_sourceUserTID - In the implementation block
@property (nonatomic,readonly) long long sourceStatusTID;                                                      //@synthesize sourceStatusTID=_sourceStatusTID - In the implementation block
@property (nonatomic,readonly) long long targetStatusTID;                                                      //@synthesize targetStatusTID=_targetStatusTID - In the implementation block
@property (nonatomic,readonly) NSString * sourceUserScreenName;                                                //@synthesize sourceUserScreenName=_sourceUserScreenName - In the implementation block
@property (nonatomic,readonly) NSString * sourceStatusText;                                                    //@synthesize sourceStatusText=_sourceStatusText - In the implementation block
@property (nonatomic,readonly) NSString * targetStatusText;                                                    //@synthesize targetStatusText=_targetStatusText - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotObjectDescriptor * sourceUserObjectDescriptor; 
@property (nonatomic,__weak,readonly) PTHTweetbotObjectDescriptor * sourceStatusObjectDescriptor; 
@property (nonatomic,__weak,readonly) PTHTweetbotObjectDescriptor * targetStatusObjectDescriptor; 
@property (nonatomic,__weak,readonly) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handleWatchMessage:(id)arg1 watchReplyHandler:(/*^block*/id)arg2 ;
+(BOOL)supportsSecureCoding;
-(long long)accountTID;
-(long long)sourceUserTID;
-(long long)sourceStatusTID;
-(long long)targetStatusTID;
-(id)initWithTweetbotInteraction:(id)arg1 ;
-(PTHTweetbotObjectDescriptor *)sourceUserObjectDescriptor;
-(PTHTweetbotObjectDescriptor *)sourceStatusObjectDescriptor;
-(PTHTweetbotObjectDescriptor *)targetStatusObjectDescriptor;
-(NSString *)sourceUserScreenName;
-(NSString *)sourceStatusText;
-(NSString *)targetStatusText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned char)type;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDate *)createdAt;
-(NSString *)typeName;
@end

