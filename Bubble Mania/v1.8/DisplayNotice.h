/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString;

@interface DisplayNotice : ModelObject {

	BOOL showingNotice;
	int flags;
	int boardVersion;
	NSString* action;
	NSString* requiredVC;
	NSString* icon;

}

@property (nonatomic,retain) NSString * requiredVC; 
@property (nonatomic,retain) NSString * action; 
@property (nonatomic,retain) NSString * icon; 
@property (assign,nonatomic) BOOL showingNotice; 
@property (assign,nonatomic) int boardVersion; 
@property (assign,nonatomic) int flags; 
+(BOOL)isValidDisplayNotice:(id)arg1 ;
-(void)setRequiredVC:(NSString *)arg1 ;
-(void)preprocess;
-(BOOL)readyToShow;
-(BOOL)showingNotice;
-(void)setShowingNotice:(BOOL)arg1 ;
-(id)allImages;
-(NSString *)requiredVC;
-(void)wasViewed;
-(void)wasAccepted;
-(BOOL)isDuplicateNotice:(id)arg1 ;
-(int)boardVersion;
-(void)setBoardVersion:(int)arg1 ;
-(void)dealloc;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(NSString *)icon;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end
