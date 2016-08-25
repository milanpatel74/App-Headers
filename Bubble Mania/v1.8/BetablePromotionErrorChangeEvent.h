/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@class NSString;

@interface BetablePromotionErrorChangeEvent : ChangeEvent {

	NSString* error;
	NSString* description;
	long long bonusAmount;
	NSString* economy;
	NSString* nonce;
	NSString* expireTime;

}

@property (nonatomic,retain) NSString * error; 
@property (nonatomic,retain) NSString * description; 
@property (assign,nonatomic) long long bonusAmount; 
@property (nonatomic,retain) NSString * economy; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * expireTime; 
+(id)mutableDictionaryTypes;
+(void)load;
-(long long)bonusAmount;
-(id)csv;
-(void)setBonusAmount:(long long)arg1 ;
-(NSString *)economy;
-(NSString *)expireTime;
-(void)setEconomy:(NSString *)arg1 ;
-(void)setExpireTime:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setDescription:(NSString *)arg1 ;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
-(void)setNonce:(NSString *)arg1 ;
-(NSString *)nonce;
@end
