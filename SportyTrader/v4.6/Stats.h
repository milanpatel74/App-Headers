/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface Stats : NSObject {

	NSString* label;
	unsigned short team1Value;
	unsigned short team2Value;

}

@property (nonatomic,retain) NSString * label; 
@property (assign,nonatomic) unsigned short team1Value; 
@property (assign,nonatomic) unsigned short team2Value; 
-(unsigned short)team1Value;
-(void)setTeam1Value:(unsigned short)arg1 ;
-(unsigned short)team2Value;
-(void)setTeam2Value:(unsigned short)arg1 ;
-(id)init;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
