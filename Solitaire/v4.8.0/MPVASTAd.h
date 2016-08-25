/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPVASTModel.h>

@class NSString, MPVASTInline, MPVASTWrapper;

@interface MPVASTAd : MPVASTModel {

	NSString* _identifier;
	NSString* _sequence;
	MPVASTInline* _inlineAd;
	MPVASTWrapper* _wrapper;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sequence;                //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) MPVASTInline * inlineAd;                 //@synthesize inlineAd=_inlineAd - In the implementation block
@property (nonatomic,readonly) MPVASTWrapper * wrapper;                 //@synthesize wrapper=_wrapper - In the implementation block
+(id)modelMap;
-(MPVASTInline *)inlineAd;
-(NSString *)sequence;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(MPVASTWrapper *)wrapper;
@end
