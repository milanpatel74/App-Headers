/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FlurryVASTLinear;

@interface FlurryVASTCreative : NSObject {

	int sequence;
	int depth;
	NSString* cId;
	long long creativeFormatType;
	FlurryVASTLinear* linear;
	NSString* apiFramework;
	NSString* adId;

}

@property (nonatomic,retain) NSString * cId; 
@property (assign,nonatomic) int sequence; 
@property (nonatomic,retain) NSString * adId; 
@property (nonatomic,retain) NSString * apiFramework; 
@property (assign,nonatomic) int depth; 
@property (assign,nonatomic) long long creativeFormatType; 
@property (nonatomic,retain) FlurryVASTLinear * linear; 
-(NSString *)adId;
-(void)setAdId:(NSString *)arg1 ;
-(NSString *)apiFramework;
-(void)setApiFramework:(NSString *)arg1 ;
-(long long)creativeFormatType;
-(NSString *)cId;
-(void)setCId:(NSString *)arg1 ;
-(void)setCreativeFormatType:(long long)arg1 ;
-(void)setSequence:(int)arg1 ;
-(int)sequence;
-(FlurryVASTLinear *)linear;
-(void)setLinear:(FlurryVASTLinear *)arg1 ;
-(int)depth;
-(void)setDepth:(int)arg1 ;
@end

