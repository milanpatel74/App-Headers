/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AbstractTournament.h>

@class NSArray;

@interface TournamentWithStats : AbstractTournament {

	NSArray* _importantStatsArray;
	NSArray* _completeStatsArray;

}

@property (nonatomic,retain) NSArray * importantStatsArray;              //@synthesize importantStatsArray=_importantStatsArray - In the implementation block
@property (nonatomic,retain) NSArray * completeStatsArray;               //@synthesize completeStatsArray=_completeStatsArray - In the implementation block
-(NSArray *)importantStatsArray;
-(void)setImportantStatsArray:(NSArray *)arg1 ;
-(NSArray *)completeStatsArray;
-(void)setCompleteStatsArray:(NSArray *)arg1 ;
@end
