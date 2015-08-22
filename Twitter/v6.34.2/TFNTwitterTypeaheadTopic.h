/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTypeaheadObject.h>

@class NSString;

@interface TFNTwitterTypeaheadTopic : TFNTwitterTypeaheadObject {

	NSString* _topic;
	long long _socialProofType;
	unsigned long long _filterType;

}

@property (nonatomic,copy) NSString * topic;                             //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) long long socialProofType;                  //@synthesize socialProofType=_socialProofType - In the implementation block
@property (assign,nonatomic) unsigned long long filterType;              //@synthesize filterType=_filterType - In the implementation block
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithBufferCursor:(const void*)arg1 bufferEnd:(const void*)arg2 ;
-(void)encodeToMutableData:(id)arg1 ;
-(void)setSocialProofType:(long long)arg1 ;
-(long long)socialProofType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
@end
