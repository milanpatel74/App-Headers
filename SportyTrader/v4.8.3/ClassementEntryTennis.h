/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ClassementEntryTennis : NSObject <NSCoding> {

	long long idCote;
	long long position;
	NSString* nom;
	long long points;
	long long evolution;

}

@property (assign,nonatomic) long long idCote; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) NSString * nom; 
@property (assign,nonatomic) long long points; 
@property (assign,nonatomic) long long evolution; 
-(NSString *)nom;
-(long long)idEquipe;
-(id)nomEquipe;
-(void)setNom:(NSString *)arg1 ;
-(long long)evolution;
-(void)setEvolution:(long long)arg1 ;
-(long long)idCote;
-(void)setIdCote:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(long long)points;
-(void)setPoints:(long long)arg1 ;
@end
