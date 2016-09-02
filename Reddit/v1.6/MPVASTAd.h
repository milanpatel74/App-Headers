/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPVASTModel.h>

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
