/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray, FBReactionContextQueryParams;

@interface FBGametimeLeagueReactionUnitData : FBGraphQLInput {

	NSString* _sportId;
	NSNumber* _date;
	NSArray* _reactionUnitIds;
	FBReactionContextQueryParams* _reactionContext;

}

@property (nonatomic,copy) NSString * sportId;                                          //@synthesize sportId=_sportId - In the implementation block
@property (nonatomic,copy) NSNumber * date;                                             //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSArray * reactionUnitIds;                                   //@synthesize reactionUnitIds=_reactionUnitIds - In the implementation block
@property (nonatomic,copy) FBReactionContextQueryParams * reactionContext;              //@synthesize reactionContext=_reactionContext - In the implementation block
-(void)setReactionUnitIds:(NSArray *)arg1 ;
-(void)setReactionContext:(FBReactionContextQueryParams *)arg1 ;
-(void)setSportId:(NSString *)arg1 ;
-(FBReactionContextQueryParams *)reactionContext;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sportId;
-(NSArray *)reactionUnitIds;
-(NSNumber *)date;
-(void)setDate:(NSNumber *)arg1 ;
@end
