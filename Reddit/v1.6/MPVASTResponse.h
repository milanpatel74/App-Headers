/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MPVASTModel.h>

@class NSArray, NSString;

@interface MPVASTResponse : MPVASTModel {

	NSArray* _ads;
	NSArray* _errorURLs;
	NSString* _version;

}

@property (nonatomic,retain) NSArray * ads;                    //@synthesize ads=_ads - In the implementation block
@property (nonatomic,retain) NSArray * errorURLs;              //@synthesize errorURLs=_errorURLs - In the implementation block
@property (nonatomic,copy) NSString * version;                 //@synthesize version=_version - In the implementation block
+(id)modelMap;
-(NSArray *)errorURLs;
-(void)setErrorURLs:(NSArray *)arg1 ;
-(void)setAds:(NSArray *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSArray *)ads;
@end
