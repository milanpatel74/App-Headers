/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface TCActionPurchaseRequestParameter : NSObject {

	long long _identifier;
	NSString* _key;
	NSString* _value;

}

@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                    //@synthesize value=_value - In the implementation block
-(id)description;
-(NSString *)key;
-(long long)identifier;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end
