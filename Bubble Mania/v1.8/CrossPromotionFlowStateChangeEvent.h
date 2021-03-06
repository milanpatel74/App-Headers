/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ChangeEvent.h>

@interface CrossPromotionFlowStateChangeEvent : ChangeEvent {

	int _crossPromotionQuestId;
	int _flowState;

}

@property (assign,nonatomic) int crossPromotionQuestId;              //@synthesize crossPromotionQuestId=_crossPromotionQuestId - In the implementation block
@property (assign,nonatomic) int flowState;                          //@synthesize flowState=_flowState - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(id)csv;
-(int)crossPromotionQuestId;
-(int)flowState;
-(void)setCrossPromotionQuestId:(int)arg1 ;
-(void)setFlowState:(int)arg1 ;
@end

