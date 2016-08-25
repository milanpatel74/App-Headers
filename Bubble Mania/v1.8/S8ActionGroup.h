/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/S8Action.h>
#import <BubbleMania/S8ActionDelegate.h>

@class NSMutableArray, NSString;

@interface S8ActionGroup : S8Action <S8ActionDelegate> {

	BOOL _shouldStartActions;
	unsigned _completedActions;
	NSMutableArray* _actions;

}

@property (nonatomic,retain) NSMutableArray * actions;               //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) unsigned completedActions;              //@synthesize completedActions=_completedActions - In the implementation block
@property (assign,nonatomic) BOOL shouldStartActions;                //@synthesize shouldStartActions=_shouldStartActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithTimeElapsed:(double)arg1 ;
-(void)stopAction;
-(void)handleActionComplete:(id)arg1 ;
-(void)restartAction;
-(void)tryToCompleteAction;
-(unsigned)completedActions;
-(void)setCompletedActions:(unsigned)arg1 ;
-(void)setShouldStartActions:(BOOL)arg1 ;
-(BOOL)shouldStartActions;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSMutableArray *)actions;
-(void)setTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
@end
